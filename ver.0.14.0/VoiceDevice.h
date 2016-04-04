#pragma once
class VoiceDevice{
	public:
		VoiceDevice(void);
		void addVoiceEvent(short);
		void clearEvents(void);
		void getNextVoiceEvent(void);
		void setDictation(std::string const&);
		void ~VoiceDevice();
};
