using namespace System;

namespace pdistd
{
	class MSoundEffect : public Object
	{
		public:
		
			MSoundEffect() { };

			void play();
			Float default_volume;
			void getEffectCodeList();
	}
}