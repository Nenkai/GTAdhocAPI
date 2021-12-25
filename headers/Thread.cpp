namespace System
{
	class Thread : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Thread() { };
						
			void start();
			void terminate();
			void join();
			void wait();
			void sleep();
			void wakeup();
			void is_alive();
			void last_value();
			void wrap();
			void resume();
			void setEntry();
			void setFinalize();

			static Thread GetCurrent();
			static void Wait();
			static void Sleep();
			static void Terminate();
			
			operator_call() {};
	}
}