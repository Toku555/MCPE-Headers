#pragma once
class RakTcpProxy{
	public:
		RakTcpProxy(void);
		void close(RakNet::SystemAddress);
		void close(RakNet::SystemAddress);
		void connect(std::string const&,ushort);
		void connect(std::string const&,ushort);
		void deallocatePacket(RakNet::Packet *);
		void deallocatePacket(RakNet::Packet *);
		void nextCompletedConnectionAttempt(void);
		void nextCompletedConnectionAttempt(void);
		void nextFailedConnectionAttempt(void);
		void nextFailedConnectionAttempt(void);
		void nextLostConnection(void);
		void nextLostConnection(void);
		void nextPacket(void);
		void nextPacket(void);
		void packetsAvailable(void);
		void packetsAvailable(void);
		void send(char const*,uint,RakNet::SystemAddress);
		void ~RakTcpProxy();
		void ~RakTcpProxy();
		void ~RakTcpProxy();
		void ~RakTcpProxy();
};
