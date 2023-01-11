using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a UI component. */
	public class MWidget : public MNode
	{
		public:
            MWidget();

            /** \brief Getter-only. */
            MWidget next_widget;

            /** \brief Getter-only. */
            MWidget prev_widget;

            /** \brief Getter-only. */
            MRootWindow next_window;

            /** \brief Getter-only. */
            MRootWindow prev_window;

            /** \brief Getter-only. */
            MWidget first_actor;

            /** \brief Getter-only. */
            MWidget last_actor;

            /** \brief Clears all the actors from this widget. */
            void clearActor(MRenderContext context = nil);

            void insertActor(MActor unk, MActor unk2);
            void insertActor(MRenderContext context, MActor unk, MActor unk2);

            /** \brief Appends an actor to actors of this widget. */
            void appendActor(MActor actor);

             /** \brief Appends an actor to actors of this widget (with context). */
            void appendActor(MRenderContext context, MActor actor);

            /** \brief Removes an actor from the list of actors of this widget. */
            void removeActor(MActor actor);

            /** \brief Removes an actor from the list of actors of this widget. (with context) */
            void removeActor(MRenderContext context, MActor actor);
            
            /** \brief Replace a specific actor of this widget. */
            void replaceActor(MActor src, MActor target);

            /** \brief Replace a specific actor of this widget. (with context) */
            void replaceActor(MRenderContext context, MActor src, MActor target);

            /** \brief Gets the count of actors for this widget. */
            Int countActor();

            /** \brief Getter-only. */
            MWidget first_effect;

            /** \brief Getter-only. */
            MWidget last_effect;

            /** \brief Clears all the effects from this widget. */
            void clearEffect(MRenderContext context = nil);

            void insertEffect(MEffect unk, MEffect unk2);
            void insertEffect(MRenderContext context, MEffect unk, MEffect unk2);

            /** \brief Appends an effect to effects of this widget. */
            void appendEffect(MEffect effect);

             /** \brief Appends an effect to effects of this widget (with context). */
            void appendEffect(MRenderContext context, MEffect effect);

            /** \brief Removes an effect from the list of effects of this widget. */
            void removeEffect(MEffect effect);

            /** \brief Removes an effect from the list of effects of this widget. (with context) */
            void removeEffect(MRenderContext context, MEffect effect);
            
            /** \brief Replace a specific effect of this widget. */
            void replaceEffect(MEffect src, MEffect target);

            /** \brief Replace a specific effect of this widget. (with context) */
            void replaceEffect(MRenderContext context, MEffect src, MEffect target);

            /** \brief Gets the count of effects for this widget. */
            Int countEffect();

            MRectangle getBoundingBox();

            Bool active;
            Bool focus;
            Bool prelight;
            Bool insensitive;
            Bool active0;
            Bool active1;
            Bool active2;
            Bool active3;
            Bool visible;
            Int x;
            Int y;
            Int w;
            Int h;
            Bool has_depth;

            /** \brief Also zoom. */
            Float depth;

            Float sx;
            Float sy;

            /** \brief Opacity from 0.0 to 1.0. 0 is transparent. */
            Float opacity;

            /** \brief Name of the blending function. Can be "mix", "add", "disable", "screen", "hard_light", "multiply". */
            String blend_func_name;

            Bool post_render;
            Bool cursor_target;
            Bool can_focus;
            Bool can_navigate;
            Bool is_face;
            Bool is_mask;
            Bool wrap_text_target;
            Int wrap_text_margin;
            Bool has_tooltip;
            String tooltip_key;

            /** \brief Center would be 0.5 */
            Float center_x;

            /** \brief Center would be 0.5 */
            Float center_y;

            /** \brief Normal is 1.0 */
            Float scale_x;

            /** \brief Normal is 1.0 */
            Float scale_y;

            /** \brief Rotation in degrees. No rotation is 0.0, 180 = flipped */
            Float rotate;

            Float skew_x;
            Float skew_y;

            Float translate_x;
            Float translate_y;

            Float offset_x;
            Float offset_y;

            Float navigate_source_x0;
            Float navigate_source_y0;
            Float navigate_source_x1;
            Float navigate_source_y1;
            Bool follow_navigate_source;

            Float navigate_target_x0;
            Float navigate_target_y0;
            Float navigate_target_x1;
            Float navigate_target_y1;
            Bool follow_navigate_target;

            Float cx;
            Float cy;

            /** \brief Getter-only. */
            Bool is_composite;

            MRectangle window_geometry;
            MRectangle screen_geometry;

            Array<Float> window_position;
            Array<Float> window_size;
            Array<Float> screen_position;

            MActor actor;

            Array<Float> center;
            Array<Float> scale;
            Array<Float> skew;
            Array<Float> translate;
            Array<Float> offset;
            Array<Float> navigate_source;
            Array<Float> navigate_target;
            Array<Float> navigate_box;

            /** \brief Normal is 0.5 */
            Float cursor_align_x;

            /** \brief Normal is 0.5 */
            Float cursor_align_y;

            /** \brief Normal is -22.5  */
            Float cursor_angle;

            Bool adaptive_cursor_align_x;
            Bool adaptive_cursor_align_y;
            Bool need_update;
            Bool packing;
            Bool packable;
            Bool pack_children;
            Array<Int> pack_pad;

  
            Int pack_pad_left;
            Int pack_pad_right;
            Int pack_pad_top;
            Int pack_pad_bottom;
            Bool pack_allocate_x;
            Bool pack_allocate_y;
            Bool pack_allocate_w;
            Bool pack_allocate_h;
            Int pack_side;
            Bool pack_expand_x;
            Bool pack_expand_y;
            Bool pack_fill_x;
            Bool pack_fill_y;
            Bool pack_shrink_x;
            Bool pack_shrink_y;

            /** \brief Normal is 0.5 */
            Float pack_alignment_x;

            /** \brief Normal is 0.5 */
            Float pack_alignment_y;
            Float minimum_width;
            Float minimum_height;
            Bool time_out;

            /** \brief 
            \returns Array with size
            - [0] -> width (Int)
            - [1] -> height (Int)
            */
            Array<Float> getRequestSize();

            /** \brief 
            \returns Array with size
            - [0] -> width (Int)
            - [1] -> height (Int)
            */
            Array<Float> getAllocateSize();

            /** \brief Getter-only. */
            MethodObject interpolateX;

            /** \brief Getter-only. */
            MethodObject interpolateY;

            /** \brief Getter-only. */
            MethodObject toNormalCoord;

            /** \brief Getter-only. */
            MethodObject toWindowCoord;

            /** \brief Getter-only. */
            MethodObject toScreenCoord;

            void resetCoord(Bool unk = false);
            MWidget getNavigateWidget();
            Bool tooltip;
	};
};