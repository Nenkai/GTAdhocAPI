using namespace System;

namespace pdistd
{
	class MPDINetworkUserId : public Object
	{
		public:
			/** \brief constructor taking no param */
			MPDINetworkUserId() { };

			/** \brief Copy from specified object into current */
			void deepCopy(MPDINetworkUserId user_id);

			/** \brief Returns whether this entity's user_id matches with the current user */
			Bool isMe();

			/** \brief User name */
			String name;

			/** \brief User DB Number */
			UInt userNumber;
	}
}