using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief Math utilities */
namespace Math
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

			static Float abs(Float value);
			static Float sin(Float value);
			static Float cos(Float value);
			static Float tan(Float value);
			static Float asin(Float value);
			static Float acos(Float value);
			static Float atan(Float value);
			static Float min(Float values, ...);
			static Float max(Float values, ...);
			static Float clamp(Float value, Float min, Float max);
			static Float lerp(Float a, Float b, Float t);
			static Float sqrt(Float value);
			static Float log(Float value);
			static Float log10(Float value);
			static Float ceil(Float value);
			static Float floor(Float value);

			/** \brief Rounds to the nearest integer
			\details If in between two numbers, the greater number will be returned */
			static Float round(Float value);

			static Float trunc(Float value);

			/** \brief Returns a random float between 0.0 and 1.0 
			\details RNG depends on a global static on which RandomUpdateOld1 with CRC is run against 
			0xad8268 in GT6 1.22 EU */
			static Float random();

			static const Float SQRT2 = 1.41421;
			static const Float SQRT3 = 1.732051;
			static const Float E = 2.718282;
			static const Float LOG10E = 0.4342945;
			static const Float LN10 = 2.302585;
			static const Float PI = 3.141593;
	};
};
