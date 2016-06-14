#pragma once
class SoundEngine{
	public:
		SoundEngine(Options &);
		SoundEngine(Options &);
		void enable(bool);
		void enable(bool);
		void fadeToStopMusic(void);
		void fadeToStopMusic(void);
		void isPlayingMusic(std::string const&);
		void isPlayingMusic(std::string const&);
		void mute(void);
		void mute(void);
		void play(std::string const&,Vec3 const&,float,float);
		void play(std::string const&,Vec3 const&,float,float);
		void playMusic(std::string const&);
		void playMusic(std::string const&);
		void playUI(std::string const&,float,float);
		void playUI(std::string const&,float,float);
		void startLoadAsync(void);
		void startLoadAsync(void);
		void stopMusic(void);
		void stopMusic(void);
		void unMute(void);
		void unMute(void);
		void update(Entity *,float);
		void update(Entity *,float);
		void ~SoundEngine();
		void ~SoundEngine();
		void ~SoundEngine();
		void ~SoundEngine();
};
