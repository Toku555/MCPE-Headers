#pragma once
class ServerLevel{
	public:
		ServerLevel(LevelStorage *,std::string const&,LevelSettings const&,int,Dimension *);
		void allPlayersSleeping(void);
		void awakenAllPlayers(void);
		void tick(void);
		void updateSleepingPlayerList(void);
		void ~ServerLevel();
		void ~ServerLevel();
};
