#pragma once
class SoundSystemBase{
	public:
		void destroy(void);
		void enable(bool);
		void init(void);
		void isPlayingMusic(std::string const&);
		void load(std::string const&,bool,bool,float);
		void mute(bool);
		void pause(std::string const&);
		void pauseMusic(bool);
		void play(std::string const&);
		void playAt(std::string const&,float,float,float,float,float);
		void playMusic(std::string const&,std::string const&);
		void preinit(void);
		void setListenerDirection(Vec3 const&,Vec3 const&);
		void setListenerPos(float,float,float);
		void setListenerVelocity(float,float,float);
		void setMusicBasePath(std::string const&);
		void setMusicVolume(float);
		void setSoundBasePath(std::string const&);
		void stop(std::string const&);
		void stopMusic(void);
		void update(void);
		void ~SoundSystemBase();
		void ~SoundSystemBase();
};
