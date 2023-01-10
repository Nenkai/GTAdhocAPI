using namespace System;

namespace pdiext
{
	/** \brief Start/Exit Game handler */
	class MSystemCondition : public Object
	{
		public:
		
			/** \brief Returns whether the game is exiting. 
			\details Returns a global boolean */
			static Int IsExitGame();

			/** \brief Exits the game. 
			\details Marks a global boolean as false */
			static void ExitGame();

			/** \brief Executes the game. 
			Marks a global boolean as true */
			static void ExecGame();
	}
}