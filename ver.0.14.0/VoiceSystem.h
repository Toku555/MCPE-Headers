#pragma once
class VoiceSystem{
	public:
		VoiceSystem(void);
		void addCommand(MCGrammar,short,std::string const&,float);
		void finalizeCommands(void);
		void getCurrentGrammar(void);
		void getDictationStr(void);
		void init(std::string const&);
		void isActive(void);
		void reset(void);
		void setTranslationLanguage(std::string const&);
		void setVoiceDevice(std::unique_ptr<VoiceDevice,std::default_delete<VoiceDevice>>);
		void switchToGrammar(MCGrammar);
		void update(void);
		void ~VoiceSystem();
		void ~VoiceSystem();
};
