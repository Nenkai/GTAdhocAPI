using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class LocalizeText
	{
		  public:
		    /** \brief Get text based on current locale */
		  	String getText();

			void setText(Int locale, String text);

			void freeze();

			Bool isEmpty();

			void deepCopy(LocalizeText src);

			String JP;
			String US;
			String GB;
			String FR;
			String ES;
			String DE;
			String IT;
			String NL;
			String PT;
			String RU;
			String KR;
			String TW;
			String CN;
			Bool isDefault();
			void freezeText();
    }		
}