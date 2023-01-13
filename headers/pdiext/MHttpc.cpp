using namespace System;

namespace pdistd
{
	/** \brief Libpace related (Undocumented Sony Library) 
	\details Should be stored into a static */
	class MHttpc : public Object
	{
		public:
			/** \brief constructor taking no param */
			MHttpc() { };

			/** \brief Inits libpace */
			void initialize();
			
			/** \brief Deinitis libpace */
			void finalize();
	}
}