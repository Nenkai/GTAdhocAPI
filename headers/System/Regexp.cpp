namespace System
{
	/** \brief Built-in type that represents a regular expression. */
	class Regexp : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			Regexp() { };
			
			/** \brief Compiles a regexp from the specified string */
			Regexp(String str) { };

			operator_call() {};

			/** \brief Compiles the input string for the current Regular expression */
			Bool compile(String input);

			/** \brief Returns whether the input string matches the regexp */
			Bool match(String input);

			/** \brief Getter only. Returns the size of the regexp. */
			Int size;
			
			Array getMatch(Int index);

			String getMatchString();
			Int getMatchCount();

			Bool isValid();
	}
}