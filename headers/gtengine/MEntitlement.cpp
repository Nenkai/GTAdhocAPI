using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Entitlement Object
	\details This class doesn't seem to do much besides holding a dictionary which 
	can be checked against with has() */
	class MEntitlement : public Object
	{
		  public:
			MEntitlement();

			void setGlobal();

			/** \returns Array with list of entitlements
			- [0] - Unk (Int)
			- [1] - Name (String)
			*/
			Array getList();
			void add(Int unk, String name);
			void remove(Int unk, String name);
			Bool has(Int unk, String name);
    }
}