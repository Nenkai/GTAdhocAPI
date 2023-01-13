using namespace System;

namespace pdistd
{
	/** \brief NP Eula Interface */
	class MNpEula : public Object
	{
		public:
			/** \brief constructor taking no param */
			MNpEula() { };

			/** \brief sceNpEulaCheckEulaStatus - Need to be signed-in
			\code
			var eula = pdistd::MNpEula();
			var eula_currver = 0;
			var status = 0;
			return eula.check(&eula_currver, &status);
			\endcode
			*/
			Bool check(Variable<UInt> eula_currver, Variable<UInt> status);

			/** \brief sceNpEulaShowCurrentEula - Need to be signed */
			Bool show();

	}
}