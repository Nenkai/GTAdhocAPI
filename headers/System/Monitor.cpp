namespace System
{
	/** \brief Represents a monitor for mutex & thread locking operations. */
	class Monitor : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Monitor() { };
			
			/** \brief Calls sys_mutex_lock - Acquire a lock of a mutex */
			void lock(); 

			/** \brief Calls sys_mutex_trylock - Try to lock a mutex */
			void trylock();

			/** \brief Calls sce_mutex_unlock - Unlock a mutex */
			void unlock(); 

			/** \brief Calls sys_lwcond_wait (usec: 0) - Wait for a signal from another PPU thread */
			void wait(); 

			/** \brief Calls sys_lwcond_signal - Signal to a PPU thread waiting on a lightweight condition variable */
			void puls();

			/** \brief Calls sys_lwcond_signal_all - Signal to all PPU threads waiting on a lightweight condition variable */
			void pulsAll();

			/** \brief Clears everything */
			void clear2();

			/** \brief Calls sys_lwcond_wait (usec: 0) - Wait for a signal from another PPU thread */
			void wait2(); 

			/** \brief Calls sys_lwcond_signal - Signal to a PPU thread waiting on a lightweight condition variable */
			void puls2();
	}
}