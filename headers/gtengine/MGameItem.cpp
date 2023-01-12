using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Represents a game item (car, driver set, consumable (GT5)...)*/
	class MGameItem : public Object
	{
		  public:
		  	MGameItem() { };

			GameItemType itemtype;
			GameItemCategory itemcategory;
			Int argument1;
			Int argument2;
			Int argument3;
			Int argument4;
			String f_name;
			MBlob blob;
			Int getSize();

			static const int VERSION = 100;

    }
}