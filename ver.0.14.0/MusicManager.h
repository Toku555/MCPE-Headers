#pragma once
class MusicManager{
	public:
		MusicManager(SoundPlayer &);
		void startPlaying(Music &);
		void stopPlaying(void);
		void update(Music &);
};
