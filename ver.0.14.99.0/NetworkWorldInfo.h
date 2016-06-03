#pragma once
class NetworkWorldInfo{
	public:
		NetworkWorldInfo(ExternalServer &);
		NetworkWorldInfo(ExternalServer &);
		NetworkWorldInfo(NetworkWorldInfo const&);
		NetworkWorldInfo(NetworkWorldInfo const&);
		NetworkWorldInfo(PingedCompatibleServer &);
		NetworkWorldInfo(PingedCompatibleServer &);
		NetworkWorldInfo(Social::XboxLiveGameInfo const&);
		NetworkWorldInfo(Social::XboxLiveGameInfo const&);
		void getExternalServer(void);
		void getFriendGame(void);
		void getOwnerName(void);
		void getPlayerCount(void);
		void getPlayerCount(void);
		void getRemoteServer(void);
		void getUpdatedHeader(void);
		void getUpdatedHeader(void);
		void getWorldName(void);
		void getWorldName(void);
		void operator==(NetworkWorldInfo const&);
		void setPlayerCount(std::string const&);
		void setWorldName(std::string const&);
		void updateExternalServer(void);
		void updateExternalServer(void);
		void ~NetworkWorldInfo();
		void ~NetworkWorldInfo();
};
