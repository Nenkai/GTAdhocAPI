namespace System
{
	class Monitor : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Monitor() { };
			
			void puls();
			void pulsAll();
			void pulse();
			void pulseAll();
	}
}