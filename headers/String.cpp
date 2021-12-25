namespace System
{
	class String : public Object
	{
		public:
		
			/// @brief constructor taking no param
			String() { };
						
			Object value;
			
			Int at(Int index);

			void format();
			void build();

			void length();
			void upcase();
			void downcase();
			void split();
			void substr();
			void beginWith();
			void beginsWith();
			void endWith();
			void endsWith();
			void removeLastOf();
			void trim();
			void chop();
			void find();
			void rfind();
			void replace();
			void replaceAll();
			Byte toByte();
			UByte toUByte();
			Short toShort();
			UShort toUShort();
			Int toInt();
			UInt toUInt();
			Long toLong();
			ULong toULong();

			operator+() {};
			operator-() {};
			operator==() {};
			operator!=() {};
			operator>() {};
			operator>=() {};
			operator<() {};
			operator<=() {};
	}
}