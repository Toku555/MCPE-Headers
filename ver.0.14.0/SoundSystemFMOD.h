#pragma once
class SoundSystemFMOD{
	public:
		void _updateListenerAttributes(void);
		void destroy(void);
		void enable(bool);
		void init(void);
		void isPlayingMusic(std::string const&);
		void load(std::string const&,bool,bool,float);
		void mute(bool);
		void playAt(std::string const&,float,float,float,float,float);
		void playMusic(std::string const&,std::string const&);
		void setListenerAngle(float);
		void setListenerPos(float,float,float);
		void setListenerVelocity(float,float,float);
		void setMusicVolume(float);
		void stopMusic(void);
		void update(void);
		void ~SoundSystemFMOD();
		void ~SoundSystemFMOD();
};
