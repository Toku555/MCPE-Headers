#pragma once
namespace NetworkHandler{
	class Connection{
		public:
		void Connection(NetworkHandler::Connection&&);
		void Connection(RakNet::RakNetGUID const&,std::unique_ptr<EncryptedNetworkPeer,std::default_delete<EncryptedNetworkPeer>>,std::chrono::time_point<std::chrono::_V2::steady_clock,std::chrono::duration<long long,std::ratio<1ll,1000000000ll>>>);
		void operator=(NetworkHandler::Connection&&);
		NetworkHandler(void);
		NetworkHandler(void);
		void closeConnection(RakNet::RakNetGUID const&,std::string const&);
		void getConnectionHelper(void);
		void getConnectionHelper(void);
		void getConnections(void);
		void getConnections(void);
		void getConnector(void);
		void getConnector(void);
		void getLocalId(void);
		void getLocalId(void);
		void getPeerForUser(RakNet::RakNetGUID const&);
		void getPeerForUser(RakNet::RakNetGUID const&);
		void getServerId(void);
		void getServerId(void);
		void getServerLocator(void);
		void getServerLocator(void);
		void isServer(void);
		void isServer(void);
		void onConnectionClosed(RakNet::RakNetGUID const&,std::string const&);
		void onConnectionClosed(RakNet::RakNetGUID const&,std::string const&);
		void onNewIncomingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onNewIncomingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onNewOutgoingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onNewOutgoingConnection(RakNet::RakNetGUID const&,NetworkPeer &);
		void onOutgoingConnectionFailed(void);
		void onOutgoingConnectionFailed(void);
		void runEvents(NetEventCallback &);
		void runEvents(NetEventCallback &);
		void send(RakNet::RakNetGUID const&,Packet const&);
		void setCloseConnection(RakNet::RakNetGUID const&);
		void setCloseConnection(RakNet::RakNetGUID const&);
		void update(void);
		void update(void);
		void ~NetworkHandler();
		void ~NetworkHandler();
		void ~NetworkHandler();
		void ~NetworkHandler();
	}
};
