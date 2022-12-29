namespace System
{
	/** \brief Built-in type that string - an array of characters - text. */
	class String : public Object, IArray
	{
		public:
		
			/// @brief constructor taking no param
			String() { };
						
			String value;
			
			/** \brief Gets an element as int at the specified index Out of range just returns 0. */
			Int at(Int index);

			/** \brief Formats the string, sprintf-like. 
			\code
			"%d".format(1); // "1"
			\endcode
			*/
			String format(String input);

			/** \brief Builds the string from multiple components.
			\code
			"{0} {1}".format("hello", "world!"); // "hello world!"
			\endcode
			*/
			String build(...);

			UInt length();

			/** \brief Returns the string as uppercase. */
			String upcase();

			/** \brief Returns the string as lowercase. */
			String downcase();

			/** \brief Splits the string into multiple strings. */
			Array<String> split(String separator);

			/** \brief returns a portion of the string, starting at the specified index. */
			void substr(Int start_index = 0);

			/** \brief returns a portion of the string, starting at the specified index and extending for a given number of characters afterwards. */
			void substr(Int start_index, Int length);

			/** \brief Returns whether the string starts with the specified string. */
			Bool beginWith(String str);

			/** \brief Returns whether the string starts with the specified string. */
			Bool beginsWith(String str);

			/** \brief Returns whether the string ends with the specified string. */
			Bool endWith(String str);

			/** \brief Returns whether the string ends with the specified string. */
			Bool endsWith(String str);

			/** \brief Returns a new string with the end truncated from the specified string. */
			String removeLastOf(String str);

			/** \brief Returns a new string with any whitespaces truncated from both ends */
			String trim();

			/** \brief Returns a new string with any specified string truncated from the end */
			String trim(String trim_str);

			/** \brief Removes new lines (\r\n) from the string (unless text more text is available) */
			String chop();
			
			/** \brief Searches for the first occurence of a string and returns its index location 
			\returns Index if found, otherwise -1 */
			Int find(String str, Int start_index = 0);

			/** \brief Searches for the first occurence starting from the end of a string backwards and returns its index location 
			\returns Index if found, otherwise -1 */
			Int rfind(String str, Int start_index = 0);

			/** \brief Adds or replace a string at the specified index.
			\param index Index to place the string
			\param size Size of the string, if 0 it will not overwrite anything and insert instead
			\param replacement Seplacement string
			\returns New string */
			String replace(UInt index, UInt size, string replacement);

			/** \brief Replaces all occurence of a string
			\returns New string */
			String replaceAll(String pattern, String replacement);

			/** \brief Converts the string to a Byte
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			Byte toByte();

			/** \brief Converts the string to a UByte
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			UByte toUByte();

			/** \brief Converts the string to a Short
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			Short toShort();

			/** \brief Converts the string to a UShort
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			UShort toUShort();

			/** \brief Converts the string to a Int
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			Int toInt();

			/** \brief Converts the string to a UInt
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			UInt toUInt();

			/** \brief Converts the string to a Long
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */
			Long toLong();

			/** \brief Converts the string to a ULong
			\details Done through stoul. Can convert from hexadecimal (i.e "0x50"), binary (i.e "0b11" = 3), "true"/"false" = 0/1, and regular numeric conversion */

			ULong toULong();

			/** \brief Concatenates two strings together */
			String operator+(String left, String right) {};

			/** \brief Removes the first occurence of the right string*/
			String operator-(String left, String right) {};

			/** \brief strcmp strings equal */
			Bool operator==() {};

			/** \brief strcmp strings not-equal */
			Bool operator!=() {};

			/** \brief strcmp left string > right string */
			Bool operator>() {};

			/** \brief strcmp left string >= right string */
			Bool operator>=() {};

			/** \brief strcmp left string < right string */
			Bool operator<() {};

			/** \brief strcmp left string <= right string */
			Bool operator<=() {};
	}
}