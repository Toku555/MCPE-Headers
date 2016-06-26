#pragma once
class SoundEngine{
	public:
		SoundEngine(float);
		void _getVolumeMult(float,float,float);
		void destroy(void);
		void enable(bool);
		void init(Minecraft *,Options *);
		void play(std::string const&,float,float,float,float,float);
		void playUI(std::string const&,float,float);
		void update(Mob *,float);
		void updateOptions(void);
		void ~SoundEngine();
};
