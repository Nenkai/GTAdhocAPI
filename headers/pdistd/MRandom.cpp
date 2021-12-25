using namespace System;

namespace pdistd
{
	class MRandom : public Object
	{
		public:

			MRandom() { };

			static Int GetValue();
			static Object GetShuffledList();

			Object mt_seed;
			Int getMTInt();
			Float getMTFloat();
	}
}