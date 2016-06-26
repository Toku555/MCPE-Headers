#pragma once
class SoundSystemSL{
	public:
		SoundSystemSL(void);
		void checkErr(ulong);
		void destroy(void);
		void init(void);
		void load(std::string const&);
		void pause(std::string const&);
		void play(std::string const&);
		void playAt(SoundDesc const&,float,float,float,float,float);
		void removePlayer(SLAndroidSimpleBufferQueueItf_ const* const*,void *);
		void removeStoppedSounds(void);
		void setListenerAngle(float);
		void setListenerPos(float,float,float);
		void stop(std::string const&);
		void ~SoundSystemSL();
		void ~SoundSystemSL();
};
