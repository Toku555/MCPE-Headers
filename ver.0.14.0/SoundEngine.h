#pragma once
class SoundEngine{
	public:
		void enable(bool);
		void fadeToStopMusic(void);
		void isPlayingMusic(std::string const&);
		void mute(void);
		void play(std::string const&,Vec3 const&,float,float);
		void playMusic(std::string const&);
		void playUI(std::string const&,float,float);
		void stopMusic(void);
		void unMute(void);
		void update(Mob *,float);
		void ~SoundEngine();
		void ~SoundEngine();
};
