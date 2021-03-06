#pragma once
class SoundSystemFMOD{
	public:
		SoundSystemFMOD(void);
		void _setPositionalAttributes(FMOD::Channel *,FMOD::Sound *,FMOD::Sound *,float,float,float,float);
		void _setPositionalAttributes(FMOD::Channel *,FMOD::Sound *,FMOD::Sound *,float,float,float,float);
		void _updateListenerAttributes(void);
		void _updateListenerAttributes(void);
		void destroy(void);
		void destroy(void);
		void enable(bool);
		void enable(bool);
		void init(void);
		void init(void);
		void isPlayingMusic(std::string const&);
		void isPlayingMusic(std::string const&);
		void load(std::string const&,bool,bool,float);
		void load(std::string const&,bool,bool,float);
		void mute(bool);
		void mute(bool);
		void pauseMusic(bool);
		void pauseMusic(bool);
		void playAt(std::string const&,float,float,float,float,float);
		void playAt(std::string const&,float,float,float,float,float);
		void playMusic(std::string const&,std::string const&);
		void playMusic(std::string const&,std::string const&);
		void preinit(void);
		void preinit(void);
		void setListenerDirection(Vec3 const&,Vec3 const&);
		void setListenerDirection(Vec3 const&,Vec3 const&);
		void setListenerPos(float,float,float);
		void setListenerPos(float,float,float);
		void setListenerVelocity(float,float,float);
		void setListenerVelocity(float,float,float);
		void setMusicVolume(float);
		void setMusicVolume(float);
		void stopMusic(void);
		void stopMusic(void);
		void update(void);
		void update(void);
		void ~SoundSystemFMOD();
		void ~SoundSystemFMOD();
		void ~SoundSystemFMOD();
		void ~SoundSystemFMOD();
};
