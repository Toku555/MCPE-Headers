#pragma once
namespace RakNetInstance{
	class ConnectionCallbacks{
		public:
		void ~ConnectionCallbacks();
		void ~ConnectionCallbacks();
		RakNetInstance(void);
		void receivePacket(std::string &);
		void ~RakNetNetworkPeer();
		void ~RakNetNetworkPeer();
		void _changeNatState(NATState,int,std::string const&);
		void _changeUpnpState(UpnpState,int,std::string const&);
		void _createPeer(RakNet::RakNetGUID const&);
		void _getPeer(RakNet::RakNetGUID const&);
		void _removePeer(RakNet::RakNetGUID const&);
		void _stateToString(NATState);
		void _stateToString(UpnpState);
		void announceServer(std::string const&);
		void clearServerList(void);
		void connect(char const*,int);
		void getPeer(void);
		void getPeer(void);
		void getServerList(void);
		void getStatistics(RakNet::RakNetStatistics *);
		void host(std::string const&,int,int);
		void init(void);
		void isMyLocalGuid(RakNet::RakNetGUID const&);
		void isProbablyBroken(void);
		void mHandleUnconnectedPong(std::string const&,RakNet::Packet const*,bool);
		void natPongReceived(RakNet::SystemAddress const&);
		void pingForHost(void);
		void pingHost(int,std::string const&);
		void resetIsBroken(void);
		void runEvents(RakNetInstance::ConnectionCallbacks &);
		void setupGameRoute(void);
		void setupNatPunch(void);
		void startPingForHosts(int,std::vector<std::string,std::allocator<std::string>> const&);
		void stopAnnounceServer(void);
		void stopPingForHosts(void);
		void tick(void);
		void ~RakNetInstance();
	}
};
