using namespace System;

namespace pdiext
{
	/** \brief Handler for SFX/Menu sounds - Must be stored into its own static for the sounds to persist! 
	\details This is effectively a holder, once the MSoundEffect is created, entries are added into the global code list
	\code
	static module main
	{
	    static gtcMenuSoundHolder = pdiext::MSoundEffect("sound_gt/se/gtcmenu.sgd");
	}
	
	main::sound.play("gtc_back");
	return main::sound.getEffectCodeList();
	\endcode

	To override some codes with others, use the following code
	\code
	main::sound.code_map["cursor"] = "gtc_change";
	main::sound.code_map["cancel"] = "gtc_back";
	main::sound.code_map["ok"] = "gtc_ok";
	\endcode
	*/
	class MSoundEffect : public Object
	{
		public:
		
			/** \brief Constructs a MSoundEffect from the provided sgd file */
			MSoundEffect(String path_to_sgd) { };

			void play(String code);
			Float default_volume;

			/** \brief Returns all the available sound codes from all the MSoundEffect instances
			\details i.e "cancel", "chat_trans", "ok", etc... */
			Array<String> getEffectCodeList();
	}
}