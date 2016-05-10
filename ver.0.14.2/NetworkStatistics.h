#pragma once
class NetworkStatistics{
	public:
		NetworkStatistics(NetworkHandler &);
		void getStats(RakNet::BitStream const&);
		void getVerboseInfo(void);
		void packetReceivedFrom(RakNet::RakNetGUID const&,RakNet::BitStream const&);
		void packetSentTo(RakNet::AddressOrGUID const&,RakNet::BitStream const&,bool);
		void ~NetworkStatistics();
		void ~NetworkStatistics();
};
