using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base representation of an update context */
	public class MUpdateContext : public Object
	{
		public:

            /** \brief Getter-only. */
            Object device;

            /** \brief Gets the press/hold status of a button. 
            \param port_no Port number. 0 would be the first controller/port. 
            \returns Buttons pressed as a bit flag.
            - 0x01 = D-PAD UP
            - 0x02 = D-PAD DOWN
            - 0x04 = D-PAD LEFT
            - 0x08 = D-PAD RIGHT
            - 0x10 = TRIANGLE
            - 0x(100)20 - CROSS?
            - 0x40 = SQUARE
            - 0x(200)80 - CIRCLE?
            - 0x100 = L1
            - 0x200 = L2
            - 0x400 = L3
            - 0x800 = R1
            - 0x1000 = R2
            - 0x2000 = R3
            - 0x4000  = START
            - 0x8000 = SELECT
            */
            Int getPadButtonState(Int port_no);

            /** \brief Gets the last press/hold status of a button. 
            \param port_no Port number. 0 would be the first controller/port. 
            \details This does not actually return the last button that was pressed if no keys are currently being pressed.
            \returns Buttons pressed as a bit flag.
            - 0x01 = D-PAD UP
            - 0x02 = D-PAD DOWN
            - 0x04 = D-PAD LEFT
            - 0x08 = D-PAD RIGHT
            - 0x10 = TRIANGLE
            - 0x(100)20 - CROSS?
            - 0x40 = SQUARE
            - 0x(200)80 - CIRCLE?
            - 0x100 = L1
            - 0x200 = L2
            - 0x400 = L3
            - 0x800 = R1
            - 0x1000 = R2
            - 0x2000 = R3
            - 0x4000  = START
            - 0x8000 = SELECT
            */
            Int getLastPadButtonState(Int port_no);

            /** \brief Returns analog channel value for the provided port and channel.
            \param port_no Port number. 0 would be the first controller/port. 
            \param channel Channel.
            - 0 = RX
            - 1 = RY 
            - 2 = LX
            - 3 = LY 
            \returns Value between 0.0 and 1.0 where 1.0 is fully pressed */
            Float getPadAnalogChannel(Int port_no, Int channel);

            /** \brief Returns the last analog channel value for the provided port and channel.
            \details This does not actually return the last channel value if no channel are currently in use.
            \param port_no Port number. 0 would be the first controller/port. 
            \param channel Channel.
            - 0 = RX
            - 1 = RY 
            - 2 = LX
            - 3 = LY 
            \returns Value between 0.0 and 1.0 where 1.0 is fully pressed */
            Float getLastPadAnalogChannel(Int port_no, Int channel);

            /** \brief Returns the name of a port/controller. i.e "SIXAXIS"
            \param port_no Port number. 0 would be the first controller/port. 
            \returns Device name. "unknown" if none, otherwise:
            Wheels:
            - COUGAR (Logitech GT Force)
            - JAGUAR (Logitech Driving Force)
            - CHEETAH (Logitech GT Force Pro)
            - TIGER
            - PANTHER (Logitech G25)
            - LEOPARD (Logitech Driving Force GT)
            - UNCIA (Logitech G27)
            - F430 (Thrustmaster F430)
            - TRS
            - T500GS (Thrustmaster T500RS)
            - T300RS (Thrustmaster T300RS)

            Standard:
            - STANDARD
            - ANALOG
            - SINGLESHOCK
            - DUALSHOCK
            - DUALSHOCK2
            - SIXAXIS 
            
            Special:
            - PLAYSTATION_OFFSET
            - WHEEL_OFFSET
            - PLAYSTATION_PORTABLE
            */
            String getPadDeviceName(Int port_no);

            /** \brief Returns the name of a port/controller. i.e "pad"
            \param port_no Port number. 0 would be the first controller/port. 
            \returns Device type. Valid results are:
            - pad
            - wheel
            - unknown (if none)
            */
            String getPadDeviceType(Int port_no);

            /** \brief Stubbed. */
            void createRenderContext();

            /** \brief Gets the count of created render contexts. */
            Int getRenderContextCount();

            MRenderContext getRenderContext(Int window_num);

            /** \brief Loads any file from the current directory (basically "/") */
            MBlob loadFile(String path);

            /** \brief Stubbed. */
            MBlob loadHostFile(String path);

            /** \brief Stubbed. */
            Int saveHostFile(String path, MBlob data);

            /** \brief Loads a GPB file globally.
            \param base_dir Base dir for the GPB. /gpb/ or /<region id> will be appended depending on the region parameter. 
            \param gpb_name Gpb name, without the extension. 
            \param region Whether to use region "/<region>/" instead of the "/gpb/" subdir. */
            void loadGpb(String base_dir, String gpb_name, Bool region = false);

            /** \brief Stubbed. */
            void loadGpbFromMC(String path);

            /** \brief Returns whether a specified GPB binary exists (does not check if file exists!)*/
            Int existGpbBinary(String name);

            /** \brief Gets a gpb file within the registered ones. */
            MBlob getGpbBinary(String name);

            /** \brief Unloads a specified GPB.
            \param gpb_dir Directory
            \param gpb_name Gpb name without extension, if not provided, uses ""
            \details %s/gpb/%s.gpb */
            void unloadGpb(String gpb_dir, String gpb_name = nil);

            String translate(String category, String pair);
            String translate(MNode node_name, String sub_category, String pair);

            static void Sync(Float time = 1.0);

            /** \brief Stubbed. */
            void getPortBlockWindowEvent();

            /** \brief Stubbed. */
            void setPortBlockWindowEvent();

            /** \brief Vibrates the pad/controller. */
            void vibratePad(Int port_no, Float time_sec = 1.0, Float small_motor_intensity = 1.0, Float large_motor_intensity = 1.0);

            Bool zoom_for_SD;
            Bool is_SD;
            Bool is_4x3;
            Int display_width;
            Int display_height;
            Float display_margin;

            void addRenderTask(Object unk, Object unk2, Object unk3, ...);
            void executeRenderTask();

            void createCaptureBuffer();
            void releaseCaptureBuffer();

            /** \brief Same as createCaptureBuffer() */
            void createWorkBuffer();

            /** \brief Same as releaseCaptureBuffer() */
            void releaseWorkBuffer();

            /** \brief Partially stubbed. Always returns 1.0, setter also returns 1.0. */
            Float cursor_speed_ratio;

            /** \brief Stubbed. */
            Object repeat_start;
            
             /** \brief Stubbed. */
            Object repeat_speed;
	};
};
