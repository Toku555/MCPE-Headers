#pragma once
namespace j{
	class ServerNetworkHandler{
		public:
		void activateWhitelist(void);
		void onReady_ClientGeneration(Player *,RakNet::RakNetGUID const&);
		void onReady_ClientGeneration(Player *,RakNet::RakNetGUID const&);
		void updateServerAnnouncement(void);
		void ~ServerNetworkHandler();
	}
};
