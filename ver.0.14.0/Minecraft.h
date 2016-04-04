#pragma once
class Minecraft{
	public:
		Minecraft(GameCallbacks &,SkinInfoFactory &,Vibration &,SoundPlayer &,Whitelist const&,std::string const&,std::chrono::duration<long long,std::ratio<1ll,1ll>>);
		void activateWhitelist(void);
		void createGameMode(GameType,Level &);
		void createLevel(std::string const&,std::string const&,LevelSettings const&);
		void getCommandParser(void);
		void getGameMode(void);
		void getLevel(void);
		void getLevelSource(void);
		void getNetEventCallback(void);
		void getPacketSender(void);
		void getRakNetInstance(void);
		void getServerName(void);
		void getServerNetworkHandler(void);
		void getTimer(void);
		void getUser(void);
		void hostMultiplayer(std::unique_ptr<Level,std::default_delete<Level>>,std::unique_ptr<GameMode,std::default_delete<GameMode>>,Player *,std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>,int,bool,int,int);
		void init(std::string const&);
		void initAsDedicatedServer(void);
		void isModded(void);
		void isOnlineClient(void);
		void onClientStartedLevel(std::unique_ptr<Level,std::default_delete<Level>>);
		void resetGameSession(void);
		void restartMultiplayerHost(int,int);
		void setGameModeReal(GameType);
		void setLeaveGame(void);
		void startClientGame(std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>);
		void stopGame(void);
		void teardown(void);
		void tick(int,int);
		void update(void);
		void validateLevel(std::string const&,std::string const&,LevelSettings const&);
		void ~Minecraft();
};
