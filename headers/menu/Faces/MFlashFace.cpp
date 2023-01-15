using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that represents a strobe (converted flash/.swf -> strobe (.strb)) file. */
	public class MFlashFace : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MFlashFace() { };

            String flash_path;

			String getFlashPath();
			String setFlashPath();

			void reset(Float unk = 0.0);
			void play(String unk);
			void play(Int unk);
			void stop();

			/** \brief Whether to fetch flash files from disk instead of GPB. Defaults to false. */
			Bool flash_from_disk;

			/** \brief Defaults to false. */
			Bool flash_block;

			/** \brief Whether to cache. Defaults to true. */
			Bool flash_cache;

			/** \brief Memory placing method. Defaults to "default". 
			\details Available options:
			- "default"
			- "forward"
			- "backward" */
			String flash_memory_place;

			UInt flash_control;

			/** \brief Same as flash_from_disk. */
			Bool from_disk;

			/** \brief Same as flash_block. */
			Bool block;

			/** \brief Same as flash_cache. */
			Bool cache;

			/** \brief Same as flash_memory_place. */
			String memory_place;

			/** \brief Same as flash_control */
			UInt control;

			MethodObject on_loop_end;
			void defineGlobal(Object value);
	};
};
