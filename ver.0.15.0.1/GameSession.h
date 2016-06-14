#pragma once
class GameSession{
	public:
		GameSession(std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>,BatchedPacketSender &);
		GameSession(std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>,BatchedPacketSender &);
		GameSession(std::unique_ptr<ServerNetworkHandler,std::default_delete<ServerNetworkHandler>>,BatchedPacketSender &,std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>,std::unique_ptr<Level,std::default_delete<Level>>,std::unique_ptr<GameMode,std::default_delete<GameMode>>);
		GameSession(std::unique_ptr<ServerNetworkHandler,std::default_delete<ServerNetworkHandler>>,BatchedPacketSender &,std::unique_ptr<NetEventCallback,std::default_delete<NetEventCallback>>,std::unique_ptr<Level,std::default_delete<Level>>,std::unique_ptr<GameMode,std::default_delete<GameMode>>);
		void getNetEventCallback(void);
		void getNetEventCallback(void);
		void setGameMode(std::unique_ptr<GameMode,std::default_delete<GameMode>>);
		void setGameMode(std::unique_ptr<GameMode,std::default_delete<GameMode>>);
		void setLevel(std::unique_ptr<Level,std::default_delete<Level>>);
		void setLevel(std::unique_ptr<Level,std::default_delete<Level>>);
		void tick(void);
		void tick(void);
		void ~GameSession();
		void ~GameSession();
};
