using namespace System;

namespace pdistd
{
	class MPseudoReflectionObject : public Object
	{
		public:

			MPseudoReflectionObject() { };

			Int getArraySize();
			void getMember();
			void getMemberList();
			void getValue();
			void setValue();
			void getPmfByteData();
			void setPmfByteData();

			static void parseObjectPath();

	}
}