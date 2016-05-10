#pragma once
class VoiceDevice{
	public:
		VoiceDevice(void);
		void addVoiceEvent(short);
		void clearEvents(void);
		void getDictationStr(void);
		void getNextVoiceEvent(void);
		void setDictation(std::string const&);
		void voiceEventPresent(void);
		void ~VoiceDevice();
		void ~VoiceDevice();
};
