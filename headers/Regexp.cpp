namespace System
{
	class Regexp : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			Regexp() { };
			
			operator_call() {};

			void compile();
			void match();

			Int size();
			Object getMatch();
			void getMatchString();
			void getMatchCount();

			Bool isValid();
	}
}