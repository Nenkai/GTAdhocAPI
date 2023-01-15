using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that acts as blur. */
	public class MGraphFace : public MColorFace
	{
		public:

            /** @brief constructor taking no param */
            MGraphFace() { };

            /** \brief Graph type. Defaults to "break_line". 
			\details Available options:
			- "line"
			- "break_line"
			- "continuity_line"
			- "fill_line" - Fill a shape between all the points
			*/
            String graph_type;

			/** \brief Index type. Defaults to "points". 
			\details Available options:
			- "points"
			- "distance"
			- "percentage"
			*/
			String index_type;

			String image_path;
			String line_image_path;
			String head_image_path;

			/** \brief Defaults to 0. */
			Float head_length;

			/** \brief Defaults to 1.0. */
			Float head_ratio;

			String tail_image_path;

			/** \brief Defaults to 0. */
			Float tail_length;

			/** \brief Defaults to 1.0. */
			Float tail_ratio;

			/** \brief Defaults to false. Needs more info when enabled as it hides the graph. */
			Bool action_enabled;

			/** \brief Defaults to false. */
			Bool turn_back;

			/** \brief Defaults to false. */
			Bool repeat;

			/** \brief Defaults to 0.*/
			Int repeat_wait;

			/** \brief Defaults to 0.0. */
			Float velocity;

			Float index;

			/** \brief Points as an array of vector2 [X, Y] between -1.0 and 1.0 if index_type is "points". 
			\details Will update when set. */
			Array<Array<Float>> points;

			/** \brief Seperate display attribute to show that it can also be assigned direct data. */
			ByteData points;

			/** \brief Setter-only. Sets data from a blob (header must start with MPNT) 
			\details Format:
			- Magic (Int, MPNT)
			- Point Count (Int)
			- Points (Int X, Int Y)
			*/

			void changePoints(Array<Array<Float>> points, Int unk_index = 0);

			/** \brief Same as graph_type. */
			String type;

			/** \brief Same as index_type. */
			String action_type;

	};
};
