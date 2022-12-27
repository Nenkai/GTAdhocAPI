using namespace System;

namespace pdistd
{
	class MPDINetworkUserProfile : public Object
	{
		public:

			MPDINetworkUserProfile() { };

			/** \brief Copy from specified object into current */
			void deepCopy(MPDINetworkUserProfile user_profile);

			/** \brief Returns whether this entity's profile matches with the current profile */
			Bool isMe();

			/** \brief User name */
			String name;

			/** \brief User DB Number */
			UInt userNumber;

			/** \brief Country code */
			String countryCode;

	}
}