#pragma once
class ServerLevel{
	public:
		ServerLevel(SoundPlayer &,std::unique_ptr<LevelStorage,std::default_delete<LevelStorage>>,std::string const&,LevelSettings const&);
		void allPlayersSleeping(void);
		void awakenAllPlayers(void);
		void setDifficulty(Difficulty);
		void stopWeather(void);
		void tick(void);
		void updateSleepingPlayerList(void);
		void ~ServerLevel();
		void ~ServerLevel();
};
