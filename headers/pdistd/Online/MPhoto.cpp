using namespace System;

namespace pdistd
{
	class MPhoto : public Object
	{
		public:

			MPhoto() { };

			void clearCallback();
			void requestList();
			void requestListByPlace();
			void requestImage();
			void requestPngImage();
			void requestThumbnail();
			void requestUploadAvatarImage();
			void requestUploadCarImage();
			void requestUploadImage();
			void requestUpdateComment();
			void requestDeleteImage();
			void requestListByFriend();
			void requestStreamList();
			void requestPublicPhotoList();
			void requestPublicCarList();
			void decodePhotoList();
			void decodeIdStringList();
			void getImagePath();
			void getPngImagePath();
			void getThumbnailPath();
	}
}