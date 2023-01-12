using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a widget made up or containing multiple widgets. */
	public class MComposite : public MWidget
	{
		public:
            MComposite() { };

			/** \brief Getter-only. Default 0. */
			Int inner_pad_left;

			/** \brief Getter-only. Default 0. */
			Int inner_pad_right;

			/** \brief Getter-only. Default 0. */
			Int inner_pad_top;

			/** \brief Getter-only. Default 0. */
			Int inner_pad_bottom;

			/** \brief Default false. */
			Bool render_clip;

			/** \brief Default false. */
			Bool navigate_group;

			String mask_path;

			/** \brief Default true. */
			Bool mask_cache;

			/** \brief Default false. */
			Bool mask_from_disk;

			/** \brief Default false. */
			Bool mask_block;

			void clearWindow();
			void clearWindow(MRenderContext context);
			void clearChild();
			void clearChild(MRenderContext context);
			void insertChild(MWidget unk, MWidget unk2);
			void insertChild(MRenderContext context, MWidget unk, MWidget unk2);
			void appendChild(MWidget widget);
			void appendChild(MRenderContext context, MWidget widget);
			void appendChild(MWidget widget);
			void appendChild(MRenderContext context, MWidget widget);
			void replaceChild(MWidget unk, MWidget unk2);
			void replaceChild(MRenderContext context, MWidget unk, MWidget unk2);
			Int countChild();
			void moveToLast(MWidget widget);
			void arrangeColAuto(Int unk, Float unk2, Float unk3);
			void arrangeRowAuto(Int unk, Float unk2, Float unk3);
			MWidget getChild(Int index);

			/** \brief Same as clearChild() */
			void clearChildren();
			void adjustSize();
			MRectangle getChildrenRegion();
			void reorderChild(Array<MNode> order_list);
			Array<MNode> getChildList();
			void reorderActiveLast();

			MNode first;
			MNode last;
			MNode first_window;
			MNode last_window;

	};
};
