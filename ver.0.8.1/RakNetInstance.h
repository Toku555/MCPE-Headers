#pragma once
class RakNetInstance{
	public:
		RakNetInstance(void);
		void announceServer(std::string const&);
		void clearServerList(void);
		void connect(char const*,int);
		void disconnect(void);
		void getPeer(void);
		void getServerList(void);
		void handleUnconnectedPong(RakNet::RakString const&,RakNet::Packet const*,char const*,bool);
		void host(std::string const&,int,int);
		void isMyLocalGuid(RakNet::RakNetGUID const&);
		void isProbablyBroken(void);
		void isServer(void);
		void pingForHosts(int);
		void resetIsBroken(void);
		void runEvents(NetEventCallback *);
		void send(Packet &);
		void send(Packet *);
		void send(RakNet::RakNetGUID const&,Packet &);
		void send(RakNet::RakNetGUID const&,Packet *);
		void setIsLoggedIn(bool);
		void stopPingForHosts(void);
		void ~RakNetInstance();
		void ~RakNetInstance();
};
