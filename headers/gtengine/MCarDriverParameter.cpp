using namespace System;

namespace gtengine
{
	/** \brief Represents a car driver/driver entity */
	class MCarDriverParameter
	{
		public:
            /** \brief Constructs a new driver parameter with DriverType::NONE.*/
			MCarDriverParameter();

            MCarDriverParameter(DriverType driver_type);

            /** \brief Returns whether the driver parameter is vacant, no user assigned to it. */
            Bool isVacant();

            /** \brief Clears all data associated to this driver parameter. */
            void clear();

            /** \brief Unknown. May assign everything back to default? */
            void reconstruct();

            /** \brief Creates a deep copy of this driver parameter. */
            MCarDriverParameter deepCopy();

            /** \brief Creates a deep copy from the specified driver parameter. */
            MCarDriverParameter deepCopy(MCarDriverParameter parameter);

            /** \brief Sets all defaults. */
            void setDefault();

            /** \brief Sets the player port attached to this driver parameter. 
            \details Sets a 4 bit field, so 0 to 15. 
            \param slot_id 0 to 15 */
            void setPlayer(Int port);

            /** \brief Gets the port of this driver parameter. */
            Int getControllerPort();

            /** \brief Gets or sets the port */
            Int port;

            /** \brief Gets or sets the type of driver parameter. */
            DriverType type;

            /** \brief Unknown. */
            Int residence_id;

            /** \brief Gets or sets the display name of this driver parameter. */
            String display_name;

            /** \brief Gets or sets the online id (PSN Name) of this driver parameter. */
            String online_id;

            /** \brief Gets or sets the region (i.e "US") of this driver parameter. */
            String region;

            /** \brief Gets or sets whether manual transmission is enabled. 
            \details Default is 0 (false)*/
            Int manual;

            /** \brief Gets or sets whether ASM is enabled. 
            \details Default is 0 (false)*/
            Int assist_asm;

            /** \brief Gets or sets TCS (Traction control) level. 
            \details Default is 1*/
            Int assist_tcs;

            /** \brief Gets or sets 4WAS level. 
            \details Default is 1 (true)*/
            Int assist_4was;

            /** \brief Gets or sets Active Brake Level. 
            \details Default is 0 */
            Int active_brake_level;

            /** \brief Gets RTA flags */
            RTAType getRTAUnadjustable();

            /** \brief Sets raw RTA value */
            void setRTAUnadjustable(RTAType type);

            /** \brief Adds RTA flag */
            void addRTAUnadjustable(RTAType type);

            /** \brief Clears all RTA flags (sets to 0) */
            void clearRTAUnadjustable();

            /** \brief Whether skid recovery is disabled. */
            Int physics_pro;

            Int steering_assist_type;
            Int active_steering;
            Int competition_flags;
            Int pad_yaw_gain;

            /** \brief Gets or sets the helmet DB code. */
            Int head_code;

            /** \brief Gets or sets the body DB code. */
            Int body_code;

            /** \brief Sets the helmet color index.
            \details 0 to 128. */
            Int head_color_code;

            /** \brief Sets the body color index.
            \details 0 to 128. */
            Int body_color_code;

            /** \brief Unknown.
            \param unused Not used.
            \param ai_level Max 100. */
            void setGroveAIParameter(String unused, Int ai_level);

            /** \brief Returns true if this driver is a human.
            \details Depends on DriverType::PLAYER */
            void isHuman();

            void isGhost();

            /** \brief Sets the AI level.
            \param level Max 100. */
            void setAILevel(Int level);

            /** \brief Sets the AI skills. */
            void setAISkill(Int braking_skill, Int cornering_skill, Int accelerating_skill = 100, Int starting_skill = 100);

            /** \brief Sets or gets the braking skill
            \details For AIs. Defaults to 100 */
            Int braking_skill;

            /** \brief Sets or gets the cornering skill
            \details For AIs. Defaults to 100 */
            Int cornering_skill;

            /** \brief Sets or gets the accelerating/corner out skill
            \details For AIs. Defaults to 100 */
            Int accelerating_skill;

            /** \brief Sets or gets the starting skill
            \details For AIs. Defaults to 100 */
            Int starting_skill;

            SpecialAIType special_ai_type;

            /** \brief Whether displaying the driving line is enabled. */
            Bool driving_display_line;

            GrowthParameter growth_parameter;
            
            Int disable_bspec_skill;
            Int ai_pit_decision_10_vitality_before_race;
            Int ai_pit_decision_10_tire_before_race;
            Int ai_roughness;
            Int ai_reaction_level;
	}
}