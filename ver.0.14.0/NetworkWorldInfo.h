#pragma once
class NetworkWorldInfo{
	public:
		NetworkWorldInfo(ExternalServer &);
		NetworkWorldInfo(NetworkWorldInfo const&);
		NetworkWorldInfo(NetworkWorldInfo&&);
		NetworkWorldInfo(PingedCompatibleServer &);
		NetworkWorldInfo(Social::XboxLiveGameInfo const&);
		void getExternalServer(void);
		void getFriendGame(void);
		void getPlayerCount(void);
		void getRemoteServer(void);
		void getStatus(void);
		void isFriend(void);
		void operator==(NetworkWorldInfo const&);
		void setIsFriend(bool);
		void setPlayerCount(std::string const&);
		void setStatus(NetworkWorldInfo::Status);
		void ~NetworkWorldInfo();
};
