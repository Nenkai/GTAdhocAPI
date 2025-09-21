using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base representation of a render context.
        \details A render context is effectively just a screen to render. There may be more than one (i.e split screen). */
	public class MRenderContext : public Object
	{
		public:
            /** \brief Gets a specific context number
            \param number Context number, 1 would be player 2 */
            MRenderContext getSubContext(UInt number);
            MRenderContext getRenderContext(Int number);

            /** \brief Getter-only. */
            Int context_number;

            MRectangle getViewport();
            void setViewport(MRectangle rect);

            /** \brief Start the specified root pages. There will be no fade (but smooth transition still) */
            void startPage(MRootWindow pages, ...);

            /** \brief Start the specified root pages. It will be immediate with no transitions. */
            void pushPage(MRootWindow pages, ...);

            void insertPage(MRootWindow unk, MRootWindow unk2, ...);

            /** \brief Closes the page with transitions.
            \details It will hang if the page stack is empty. In that case push or start another page. */
            void closePage(MRootWindow window, Float delay = 0);

            void startClosePage(MRootWindow window, Object unk);
            void syncClosePage(MRootWindow window);

            /** \brief Pops the page with no transitions. */
            void popPage(MRootWindow window, Float delay = 0);

            /** \brief Clears all the pages. */
            void clearPage();

            void reorderPage();

            /** \brief Gets the count of layers. */
            UInt getLayerCount();

            /** \brief Gets the current page count. */
            UInt getPageCount();

            /** \brief Gets the page list. Ordered from first to last opened. */
            Array<MRootWindow> getPageList();

            MRootWindow getCurrentPage();
            MRootWindow getRootWindow();

            void finish();

            /** \brief Getter-only. */
            Bool finished;

            /** \brief Suspends the renderer's event loop. 
            \details Inputs will be queued and pushed once resumeEventLoop() is called. */
            void suspendEventLoop();

            void resumeEventLoop();
            
            /** \brief Doesn't do anything. */
            void enterEventLoop();

            /** \brief Doesn't do anything. */
            void leaveEventLoop();

            /** \brief Getter-only. */
            Int event_loop_level;

            /** \brief Loads any file from the current directory (basically "/") */
            MBlob loadFile(String path);

            /** \brief Loads a GPB file globally.
            \param base_dir Base dir for the GPB. /gpb/ or /<region id> will be appended depending on the region parameter. 
            \param gpb_name Gpb name, without the extension. 
            \param region Whether to use region "/<region>/" instead of the "/gpb/" subdir. */
            void loadGpb(String base_dir, String gpb_name, Bool region = false);

            /** \brief Unloads a specified GPB.
            \param gpb_dir Directory
            \param gpb_name Gpb name without extension, if not provided, uses ""
            \details %s/gpb/%s.gpb */
            void unloadGpb(String gpb_dir, String gpb_name = nil);

            /** \brief Returns whether a specified GPB binary exists (does not check if file exists!)*/
            Int existGpbBinary(String name);

            void sync();

            /** \brief Waits on the renderer side. (Need more info)
            \param time Will be multiplied by 60 */
            void wait(Float time = 1.0);

            void rushEvent(MEvent event);
            void pushEvent(MEvent event);

            void flushWidgetEvent();
            void filterWidgetEvent();
            void flushKeyEvent();
            void filterKeyEvent();
            void filterEvent(String name = nil);
            void filterEvent(FunctionObject cb = nil);
            void flushEvent(String name = nil);
            void flushEvent(FunctionObject cb = nil);

            void captureScreen();
            void releaseScreen();

            MUpdateContext getUpdateContext();

            /** \brief Getter-only. */
            MUpdateContext device;

            String translate(String category, String pair);
            String translate(MNode node_name, String sub_category, String pair);

            /** \brief Gets a registed page by name i.e "CursorRoot" */
            MRootWindow getCommonPage(String page_name);

            /** \brief Gets the cursor project - "CursorProject" (hardcoded) */
            MProject getCursorProject();

            /** \brief Gets the cursor root - "CursorRoot" (hardcoded) */
            MProject getCursorProject();

            Object getPrelightWidget();

            void setMousePositionOnFocus(MRootWindow unk = nil);

            /** \brief Enables rendering of this render context. */
            Bool enable;

			/** \brief Event pumping mask/bit flags. Controls which input device is allowed to pump events. 
			\details For bits:\n
			Bit 0 (0x01) = Pad 1 (Player 1)\n
			Bit 1 (0x02) = Pad 2 (Player 2)\n
			Bit 2 (0x04) = Keyboard\n
			Bit 4 (0x10) = Mouse Events (MMotion)\n */
            UInt event_mask;

            Bool getInputEnable();

            /** \brief Enable user-input. */
            void enableInput();

            /** \brief Disables user-input. */
            void disableInput();

            UInt event_loop_busy;

            Int clear;

            /** \brief Whether to pause rendering. Input will still be processed if paused. */
            Bool pause;

            MRootTransition root_transition;
            
            /** \brief Getter-only. */
            MRootTransition active_root_transition;

            Bool render_simple;
            Int normal_priority;
            Int sub_context_priority;
            Int transition_priority;

            /** \brief Gets the time in seconds since the last input. */
            Float time_after_last_input;

            /** \brief Gets or sets whether the cursor is visible.*/
            Bool cursor_visible;

            /** \brief Gets or sets the image path for the cursor 
            \details Default is "/image/cursor/cursor_chrome.png" from GPB */
            String cursor_image_path;

            /** \brief Gets or sets the current move mode for the cursor
            \details Valid move modes are "interpolate" (default), "spring" */
            String cursor_move_mode;

            /** \brief Gets or sets the interpolate cursor ratio
            \details Default is 0.25. cursor_move_mode must be set to "interpolate" */
            Float cursor_interpolate_ratio;

            /** \brief Gets or sets the spring cursor ratio
            \details Default is 1000.0. cursor_move_mode must be set to "spring" */
            Float cursor_spring_ratio;

            /** \brief Unknown.
            \details Default is 20.0. */
            Float cursor_friction_ratio;

            void setCursorWidget(MWidget widget);

            /** \brief Whether the game data install message is allowed to appear */
            Bool installing_visible;

            /** \brief Whether the signed out message is allowed to appear */
            Bool signed_out_visible;

            /** \brief Gets or sets the renderer's opacity 
            \details Default is 1.0. */
            Float opacity;

            /** \brief Setter-only. */
            MWidget popup_owner;

            /** \brief Setter-only. */
            MWidget target_widget;

            /** \brief Getter-only. Gets the render context's frame rate. 
            \details Default is 60.0 */
            Float frame_rate;

            void resetTargetWidget();

            /** \brief Gets the cursor's position.
            \returns Array with [X, Y] */
            Array<Float> getMousePosition();

            /** \brief Sets the cursor's position.
            \returns Array with [X, Y] */
            void setMousePosition(Array<Float> position);

            Bool follow_cursor_x;
            Bool follow_cursor_y;

            /** \brief Gets the amount of time this render context has been running in seconds. */
            Float getCurrentTime();

            void pageInRootTransition();
            void pageOutRootTransition();
            void syncInRootTransition();
            void syncOutRootTransition();

            /** \brief Sets a specified timeout's time and starts the timer
            \details Use addTimeOut() first */
            void setTimeOut(String func_name, Float execute_in_seconds);

            /** \brief Adds a new timeout function callback 
            \details Use setTimeOut() first to set the time and start the timer*/
            void addTimeOut(String name, FunctionObject cb, Object args, ...);

            /** \brief Removes the specified timeout callback*/
            void removeTimeOut(String name);

            /** \brief Clears all timeout callbacks */
            void clearTimeOut();

            void clearTrashPageAll();
            void clearTrashNodeAll();
            void clearTrashDataAll();

            void addRenderTask(Object unk, Object unk2, Object unk3, ...);
            void executeRenderTask();

            Bool zoom_for_SD;
            Bool is_SD;
            Bool is_4x3;

            /** \brief Getter-only. Gets the renderer's display width.
            \details 1080p GT6 returns 1440 */
            Int display_width;

            /** \brief Getter-only. Gets the renderer's display height.
            \details 1080p GT6 returns 1080 */
            Int display_height;

            /** \brief Getter-only. Gets the renderer's display margin.
            \details 1.0 is no margin */
            Float display_margin;

            /** \brief Getter-only. On-screen-keyboard display width 
            \details GT6 is 1920 */
            Int osk_display_width;

             /** \brief Getter-only. On-screen-keyboard display height 
            \details GT6 is 1080 */
            Int osk_display_height;

            /** \brief Getter-only. On-screen-keyboard screen width 
            \details GT6 is 1920 */
            Float osk_screen_width;

            /** \brief Getter-only. On-screen-keyboard screen height 
            \details GT6 is 1920 */
            Float osk_screen_height;

            /** \brief Starts the image renderer for image resizing/scaling
            \code Example use
            function resizeForOnline(context, photo)
            {
                context.beginImageRender();
                context.loadImage(photo.filename);
                var w = context.getImageWidth();
                var h = context.getImageHeight();

                var scale = 1.0;
                if (w > h)
                    scale = 1024.0 / w.toFloat();
                else
                    scale = 768.0 / h.toFloat();

                if (scale > 1.0)
                    return photo.filename;

                context.scaleImage(scale);

                var output_file = "/APP_DATA_RAW/photo/test.jpg";
                context.saveImage(output_file);
                context.endImageRender();

                return output_file;
            }
            \endcode */
            void beginImageRender();

            void endImageRender();

            /** \brief Loads an image into the image renderer
            \details Make sure beginImageRender() was called first
            .jpg, .mpo or .png 
            Must be file name length must be at least 5 characters including extension */
            Bool loadImage(String file_name);

            /** \brief Saves an image from the image renderer
            \details Make sure beginImageRender() was called first 
            Exports to jpeg, make sure extension is .jpg */
            Bool saveImage(String file_name);

            /** \brief Scales the render image to the specified scale 
            \details Make sure beginImageRender() & loadImage() was called first */
            Bool scaleImage(Float scale);

            /** \brief Gets the render image width
            \details Make sure beginImageRender() & loadImage() was called first */
            Int getImageWidth(Float scale);

            /** \brief Starts On-Screen-Keyboard with detailled configuration
            \param config Map configuration
            - "widget" -> MWidget
            - "separate_mode" -> Bool
            - "limit_length" -> Int (Default 128)
            - "background_trans" -> Float (Default 0.0)
            - "sync_mode" -> Bool
            - "no_return" -> Bool (Default false)
            - "password_mode" -> Bool */
            String openOSK(Map config);

            /** \brief Starts On-Screen-Keyboard */
            String openOSK(MWidget widget, Bool sync_mode);

            void closeOSK();

            /** \brief Stubbed. */
            void dumpTraceInfo();

            /** \brief Stubbed. */
            void SendMessage();

            /** \brief Stubbed. */
            Object transition;

            void appendRootTransition(MRootTransition transition);

            /** \brief Stubbed. */
            Object cursor;

            /** \brief Partially stubbed. Always returns 1.0, setter also returns 1.0. */
            Float cursor_speed_ratio;

            /** \brief Stubbed. */
            void shotScreen();
	};
};
