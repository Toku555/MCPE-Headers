#pragma once
class RealmsWorldInfo{
	public:
		RealmsWorldInfo(Realms::World &,std::string const&);
		RealmsWorldInfo(Realms::World &,std::string const&);
		void getOwnerName(void);
		void getOwnerName(void);
		void getPlayerCount(void);
		void getPlayerCountAsString(void);
		void getPlayerCountAsString(void);
		void getRealmFull(void);
		void getRealmWorld(void);
		void getWorldName(void);
		void getWorldName(void);
		void hasExpired(void);
		void isOwner(void);
		void isOwner(void);
		void isPlayerOwner(std::string const&);
		void setOwnerName(std::string const&);
		void setPlayerCount(int);
		void setRealmFull(bool);
};
