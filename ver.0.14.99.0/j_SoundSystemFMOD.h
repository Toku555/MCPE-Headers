#pragma once
namespace j{
	class SoundSystemFMOD{
		public:
		void enable(bool);
		void isPlayingMusic(std::string const&);
		void mute(bool);
		void setMusicVolume(float);
		void stopMusic(void);
	}
};
