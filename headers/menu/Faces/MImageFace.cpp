using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays an image. */
	public class MImageFace : public MColorFace
	{
		public:

            /** @brief constructor taking no param */
            MImageFace() { };

            /** \brief Gets the image path for this image face.
            \param path Use to set the image path. 
                  setImagePath() uses the same function as this one, so it's possible to set the path from here. */
            String getImagePath(String path = nil);

            /** \brief Sets the image path for this image face.
            \param path Use to set the image path. 
                  getImagePath() uses the same function as this one, so it's possible to get the path from here. */
            String setImagePath(String path = nil);

            void adjustSize();

            String image_path;

            /** \brief Setter-only. Sets image chunk from data (should be a byte data) 
            \details Compression is supported (0xfff7eec5)*/
            String image_chunk;

            /** \brief Whether image_path refers to a path on the disk or a path in GPB. Defaults to false*/
            Bool image_from_disk;

            /** \brief Defaults to false. */
            Bool image_block;

            /** \brief Whether to cache the image. Defaults to true. */
            Bool image_cache;

            /** \brief Unknown. Defaults to "default".
            \details Available options:
            - "default"
            - "forward"
            - "backward"
            */
            String image_memory_place;

            /** \brief Width limit of the image. Defaults to 1920. */
            UInt image_limit_width;

            /** \brief Same as image_from_disk. */
            Bool from_disk;

            /** \brief Same as image_block. */
            Bool block;

            /** \brief Same as image_cache. */
            Bool cache;

            /** \brief Same as image_memory_place. */
            String memory_place;

            /** \brief Same as image_limit_width. */
            UInt limit_width;

            /** \brief Setter-only. */
            Float texcoord_top;

            /** \brief Setter-only. */
            Float texcoord_bottom;

            /** \brief Setter-only. */
            Float texcoord_left;

            /** \brief Setter-only. */
            Float texcoord_right;

            /** \brief Texture Coordinate type name. Defaults to "uv".
            \details Available options: 
            - "uv" 
            - "palette"
            - "tile" */
            String tex_coord_type_name;

            /** \brief Texture function name. Defaults to "modulate".
            \details Available options:
            - "modulate"
            - "color_mask"
            */
            String tex_func_name;

            /** \brief Texture wrap X type. Defaults to "clamp"
            \details Available options:
            - "clamp"
            - "repeat"
            - */
            String tex_wrap_name_x;

            /** \brief Texture wrap X type. Defaults to "clamp"
            \details Available options:
            - "clamp"
            - "repeat"
            - */
            String tex_wrap_name_y;

            /** \brief Texture blur on each axis. */
            Array<Float> tex_blur;

            /** \brief Defaults to 0. */
            Float tex_blur_x;

            /** \brief Defaults to 0. */
            Float tex_blur_y;

            /** \brief Defaults to false. */
            Bool tex_keep_size;

            /** \brief Defaults to false. */
            Bool tex_keep_aspect;        

            /** \brief Defaults to 1. */
            UInt tex_palette_x; 

            /** \brief Defaults to 1. */
            UInt tex_palette_y; 

            /** \brief Defaults to 0. */
            Float tex_palette_index;

            MethodObject on_delay_load_complete;

            void Texcoord(Float x, Float y, Float w, Float h);

            /** \brief Stubbed. */
            void tex_env_color;

            /** \brief Wrap X type. Defaults to "clamp"
            \details Available options:
            - "clamp"
            - "repeat"
            - */
            String wrap_type_name_x;

            /** \brief Wrap Y type. Defaults to "clamp"
            \details Available options:
            - "clamp"
            - "repeat"
            - */
            String wrap_type_name_y;
            
            /** \brief Stubbed */
            Object blur_x;

            /** \brief Stubbed */
            Object blur_y;

            /** \brief Stubbed */
            Object shadow_path;

            /** \brief Stubbed */
            Object emission_path;
	};
};
