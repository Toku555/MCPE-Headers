#pragma once
class VoiceSystem{
	public:
		VoiceSystem(void);
		VoiceSystem(void);
		void addCommand(MCGrammar,short,std::string const&,float);
		void addCommand(MCGrammar,short,std::string const&,float);
		void finalizeCommands(void);
		void finalizeCommands(void);
		void getCurrentGrammar(void);
		void getCurrentGrammar(void);
		void getDictationStr(void);
		void getDictationStr(void);
		void init(std::string const&);
		void init(std::string const&);
		void isActive(void);
		void isActive(void);
		void reset(void);
		void reset(void);
		void setTranslationLanguage(std::string const&);
		void setTranslationLanguage(std::string const&);
		void setVoiceDevice(std::unique_ptr<VoiceDevice,std::default_delete<VoiceDevice>>);
		void switchToGrammar(MCGrammar);
		void switchToGrammar(MCGrammar);
		void update(void);
		void update(void);
		void ~VoiceSystem();
		void ~VoiceSystem();
		void ~VoiceSystem();
		void ~VoiceSystem();
};
