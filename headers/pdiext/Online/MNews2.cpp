using namespace System;

namespace pdistd
{
	/** \brief News API Handler (News Articles) */
	class MNews2 : public Object
	{
		public:
			/** \brief constructor taking no param */
			MNews2() { };

			void initialize();
			void clearCallback();
			void requestCategoryRoot();
			void requestCategoryList();
			void decodeCategoryList();
			void requestNewsIdList();
			void requestNewsIdListForce();
			void decodeNewsIdList();
			void decodeNewsIdList2();
			void requestNews();
			void requestNewsForce();
			void decodeNews();
			void requestImage();
			void getImagePath();
			void isExistImage();
			void removeAll();
			void requestCategoryImage();
			void getCategoryImagePath();
	}
}