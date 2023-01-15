using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a scene (models, etc). */
	public class MSceneFace : public MImageFace
	{
		public:

            // CAR/SCN/CRD/OBJ/CRS/ANY?

            /** @brief Do not use. Any functions used with a scene face generated with the constructor will crash. 
            \details Prefer initting from a project/widget file instead. */
            MSceneFace() { };

            /** \brief Loads a command file. 
            \param cmd can be "code":<code> which will be appended to /scene/script/ or appended to /APP_DATA/grim/file/asset/scene/script/ 
            Or can be a path (starting from USRDIR) 
            \returns Result, 1 if succeeded */
            Int loadCommandFile(String cmd);

            /** \brief Queues a scene command. */
            Int execCommand(String cmd);

            /** \brief Executes a scene command immediately. Do note the typo. */
            Int execCommandImmidiate();

            /** \brief Sets the default car parameter to use for the specified index. */
            Int setDefaultCarParameter(MCarParameter car, Int index = 0);

            /** \brief Sets the default car driver parameter to use for the specified index. */
            Int setDefaultCarDriverParameter(MCarDriverParameter car, Int index = 0);
            
            /** \brief Saves the command queue. */
            void saveCommandQueue();

            /** \brief Resets the command queue. */
            void resetCommandQueue();

            /** \brief Sets the preview path. */
            void setPreviewPath(String path);

            /** \brief Sets a signal handler/callback. 
            \details Best used with the "sendsignal" command, see SceneFaceUtil.ad for more information on how handlers work. */
            Int setSignalHandler(MethodObject<MRenderContext, Int> handler, UInt unk = 0);

            Int setResourceAllocator(MOrganizer organizer, Int unk);

            Int setExternalEnvTextureSet(ByteData unk);

            void setEntityRotateY(String type, String lod_name, Float angle);
            void setEntityRotateVelocityY(String type, String lod_name, Float angle, Float unk = 0);
            Bool isEntityRenderable(String unk, String unk2 = nil);

            /** \brief Returns whether the scene face is currently being constructed. */
            Bool isUnderSetup();
            
            Bool isUnderPhotoRendering();
            Bool isUnderPhotoEncoding();
            Bool isUnderPhotoExitWait();
            Float getPhotoProgress();
            Int setClearColorBuffer(Bool unk);
            Int setClearDepthBuffer(Bool unk);
            Int setSimpleRenderer(Bool unk);

            /** 
            \returns Map with results
            - "fovy" - (Float)
            - "mm" - (Float)
            - "f_value" - (Float)
            - "target_length" - (Float)
            - "shutter_speed" - (Float)*
            - "exposure_correct - (Float)
            - "frame_height" - (Float)
            - "value_mode" - (?)
            - "req_composition_change" - (Bool)
            - "walk_pos_x"
            - "walk_pos_y"
            - "walk_pos_z"
            - */
            Map getCameraParameters();

            /** 
            \returns Map with results
            - "car_pos"
            - "cam_ydeg"
            - "avatar_pos"
            - "avatar_ydeg"
            - */
            Map getCar2DPosition(Float p1, Float p2, Float p3, Float p4, Float p5, Float p6, Float p7);
            Array getCarMapPosition(Float p1, Float p2, Float p3, Float p4, Float p5, Float p6, Float p7);

            /** 
            \param unk "avatar" is valid */
            Int getReserveCount(String unk);

            Int allocateSnapshotMemory(Int size);
            void exitPhotoPreview();
            void iconCaptureBegin();
            void iconCaptureEnd();
            void iconShotImage();
            void iconShotMask();
            void iconCompositeSave(String path);
            void iconCompositeSave(String path, Int unk, Int unk2, Int unk3, Int unk4);
            void iconCompositeSave(String path, Int unk, Int unk2, Int unk3, Int unk4, Int unk5, Int unk6);

            void waitTickEntry();
            void setSoundFader(Bool switch);
            void setSoundGain(Float gain);
            Array<Float> getEntityParameter(String entity);
            Bool getEntityVisible(String entity, String name);
            Int getLatestCarLightMode(Int index);
            Float getCarEntityLODSize(String lod_name);
            String getStringVariable(String variable_name);
	};
};
