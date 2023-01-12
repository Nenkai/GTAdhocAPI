using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents an actor. */
	public class MActor : public MNode
	{
		public:
            MActor() { };

            void initialize();
            void start();
            void stop();
            void rewind();
            void warp();
            void forward();
            void backward();
            void flip();
            void restart();
            void reset();

            MNode target_node;

            /** \brief Defaults true. */
            Bool initial_playing;

            /** \brief Defaults false. */
            Bool initial_pause;

            /** \brief Defaults false. */
            Bool initial_reverse;

            /** \brief Focus enter action name. Defaults to "keep"
            \details Valid actions:
            - "keep"
            - "start"
            - "pause"
            - "stop"
            - "restart"
            - "reset"
            - "reverse_start"
            - "reverse_pause"
            - "reverse_stop"
            - "reverse_restart"
            - "reverse_reset"
            - "flip_start"
            - "flip_pause"
            - "flip_stop"
            - "flip_restart"
            */
            String focus_enter_action_name;

            /** \brief Focus leave action name. Defaults to "keep"
            \details Valid actions:
            - "keep"
            - "start"
            - "pause"
            - "stop"
            - "restart"
            - "reset"
            - "reverse_start"
            - "reverse_pause"
            - "reverse_stop"
            - "reverse_restart"
            - "reverse_reset"
            - "flip_start"
            - "flip_pause"
            - "flip_stop"
            - "flip_restart"
            */
            String focus_leave_action_name;

            /** \brief Getter-only. */
            MActor next_actor;

            /** \brief Getter-only. */
            MActor prev_actor;

            Object on_effect_start;
            Object on_effect_end;
            Object rt_effect_start;
            Object rt_effect_end;

            /** \brief Whether the actor is paused. */
            Bool pause;

            Bool reverse;

            /** \brief Setter-only. */
            Bool out;
	};
};
