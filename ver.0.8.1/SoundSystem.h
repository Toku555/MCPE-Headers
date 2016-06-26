#pragma once
class SoundSystem{
	public:
		void enable(bool);
		void isAvailable(void);
		void load(std::string const&);
		void pause(std::string const&);
		void play(std::string const&);
		void playAt(SoundDesc const&,float,float,float,float,float);
		void setListenerAngle(float);
		void setListenerPos(float,float,float);
		void stop(std::string const&);
		void ~SoundSystem();
		void ~SoundSystem();
};
