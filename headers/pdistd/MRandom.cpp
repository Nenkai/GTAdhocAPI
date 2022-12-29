using namespace System;

namespace pdistd
{
	/** \brief Mersenne-Twister base random number generator object */
	class MRandom : public Object
	{
		public:

			/** \brief Gets a new MRandom instance with seed MT 0x12345678 */
			MRandom() { };

			/** \brief Gets a new MRandom instance with specified MT seed */
			MRandom(Int seed) { };

			/** \brief Gets a random value (does not use MT seed) */
			static Int GetValue();

			/** \brief Gets a random value between min (inclusive) and max (non-inclusive)*/
			static Int GetValue(Int min, Int max);

			static Object GetShuffledList();

			/** \brief Gets or sets the random's seed */
			Int mt_seed;

			/** \brief Gets a pseudo-random integer from seed 
			\code
			var rand = pdistd::MRandom();
			rand.mt_seed = 42;
			return rand.getMTInt();
			\endcode
			*/
			Int getMTInt();

			/** \brief Gets a pseudo-random integer from seed between min (inclusive) and max (non-inclusive)
			\code
			var rand = pdistd::MRandom();
			rand.mt_seed = 42;
			return rand.getMTInt(0, 10);
			\endcode
			*/
			Int getMTInt(Int min, Int max);

			/** \brief Gets a pseudo-random float from seed between min (inclusive) and max (non-inclusive) */
			Float getMTFloat(Float min, Float max);
	}
}