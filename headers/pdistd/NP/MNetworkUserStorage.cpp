using namespace System;

namespace pdistd
{
	class MNetworkUserStorage : public Object
	{
		public:

			MNetworkUserStorage() { };

			void initialize();
			void finalize();
			void isInitialized();
			void test();
			void getVariable();
			void getMultiSlotVariables();
			void getMultiUserVariables();
			void setVariable();
			void setMultiSlotVariables();
			void getMultiSlotDataStatus();
			void getMultiUserDataStatus();
			void getData();
			void setData();
			void deleteData();
			void deleteMultiData();

	}
}