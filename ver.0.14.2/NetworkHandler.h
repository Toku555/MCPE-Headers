#pragma once
class NetworkHandler{
	public:
		NetworkHandler(void);
		void getConnections(void);
		void getLocalId(void);
		void getRakNet(void);
		void getRakNet(void);
		void getServerId(void);
		void getStreamForUser(RakNet::RakNetGUID const&);
		void isServer(void);
		void onConnectionClosed(RakNet::RakNetGUID const&,std::string const&);
		void onNewIncomingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onNewOutgoingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onOutgoingConnectionFailed(void);
		void runBackgroundEvents(void);
		void update(void);
		void ~NetworkHandler();
		void ~NetworkHandler();
};
