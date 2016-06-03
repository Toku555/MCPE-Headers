#pragma once
class NetworkStatistics{
	public:
		NetworkStatistics(NetworkHandler &);
		void getAverageLast10Seconds(void);
		void getStats(int);
		void getTotalPreviousSecond(void);
		void getVerboseInfo(void);
		void packetReceivedFrom(RakNet::RakNetGUID const&,Packet const&,RakNet::BitStream const&);
		void packetReceivedFrom(RakNet::RakNetGUID const&,Packet const&,RakNet::BitStream const&);
		void packetSentTo(RakNet::AddressOrGUID const&,Packet const&,RakNet::BitStream const&);
		void packetSentTo(RakNet::AddressOrGUID const&,Packet const&,RakNet::BitStream const&);
		void tick(void);
		void tick(void);
		void ~NetworkStatistics();
		void ~NetworkStatistics();
		void ~NetworkStatistics();
		void ~NetworkStatistics();
};
