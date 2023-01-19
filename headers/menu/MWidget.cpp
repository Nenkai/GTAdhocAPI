using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a UI component. */
	public class MWidget : public MNode
	{
		public:

          /** \brief constructor taking no param */
          MWidget() { }
      
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
      
          /** \brief Whether to post-render. Defaults to false. */
          Bool post_render;

          /** \brief Defaults to true. */
          Bool cursor_target;

          /** \brief Whether the widget can be focused. Defaults to false. */
          Bool can_focus;

          /** \brief Whether the widget can be navigated to. Defaults to true. */
          Bool can_navigate;

          /** \brief Whether this widget is a facing/displaying content. Defaults to false. */
          Bool is_face;

          /** \brief Whether this widget is a mask. Defaults to false. */
          Bool is_mask;

          /** \brief Whether to wrap text in the target. Defaults to false. */
          Bool wrap_text_target;
          
          /** \brief Text wraping margin. Defaults to 4. */
          Int wrap_text_margin;

          /** \brief Whether this widget has a tooltip. Defaults to false. */
          Bool has_tooltip;

          /** \brief String key for the tooltip. */
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

          /** \brief Whether this object is allowed to be packed. Parent object must allow packing, such as any MBox. */
          Bool packable;

          /** \brief Whether to allow children to be packed within this widget. This is normally used to allow MRootWindow to pack its children, or prevent any MBox from packing. */
          Bool pack_children;

          /** \brief Pad for each side. [pack_pad_left, pack_pad_right, pack_pad_top, pack_pad_bottom]*/
          Array<Int> pack_pad;
      
          /** \brief If packing enabled, Padding while packing on the left in pixels. */
          Int pack_pad_left;

          /** \brief If packing enabled, Padding while packing on the right in pixels. */
          Int pack_pad_right;

          /** \brief If packing enabled, Padding while packing at the top in pixels. */
          Int pack_pad_top;

          /** \brief If packing enabled, Padding while packing on the bottom in pixels. */
          Int pack_pad_bottom;

          Bool pack_allocate_x;
          Bool pack_allocate_y;
          Bool pack_allocate_w;
          Bool pack_allocate_h;
          Int pack_side;
          Bool pack_expand_x;
          Bool pack_expand_y;

          /** \brief Whether to fill X while packing. Defaults to false */
          Bool pack_fill_x;

          /** \brief Whether to fill Y while packing. Defaults to false */
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
