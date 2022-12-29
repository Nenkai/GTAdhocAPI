namespace System
{
	/** \brief Built-in type that represents a thread for asynchronous tasks. */
	class Thread : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Thread() { };

			/** \brief Creates a new adhoc thread from the provided function */
			Thread(FunctionObject func) { };	

			/** \brief Starts the thread. */
			void start();

			/** \brief Sets the thread's state to terminate. */
			void terminate();

			/** \brief Blocks the calling thread until the thread represented by this instance terminates.*/
			void join(UInt wait_time = 0);

			/** \brief Waits on the thread. */
			void wait(Float wait_time = 0);

			/** \brief Puts the thread to sleep. */
			void sleep();

			/** \brief Wakes the thread if sleeping.. */
			void wakeup();

			/** \brief Getter only. Returns whether the thread is alive and running. */
			Bool is_alive;

			/** \brief Unknown. */
			void last_value();

			/** \brief Unknown. Might take non-fixed amount of threads as parameters */
			void wrap();

			/** \brief Resumes the thread. */
			void resume();

			/** \brief Sets the thread's entrypoint. */
			void setEntry(FunctionObject entry);

			/** \brief Sets the thread's finalizer. */
			void setFinalize(FunctionObject fin);

			/** \brief Gets the current thread. */
			static Thread GetCurrent();

			/** \brief Wait on the current thread. */
			static void Wait();

			/** \brief Sleep on the current thread. */
			static void Sleep(Float time);

			/** \brief Terminates the current thread. */
			static void Terminate();
			
			operator_call() {};
	}
}