#pragma once
class BatchedPacketSender{
	public:
		BatchedPacketSender(NetworkHandler &);
		void addLoopbackCallback(NetEventCallback &);
		void removeLoopbackCallback(NetEventCallback &);
		void send(Packet const&);
		void send(RakNet::RakNetGUID const&,Packet const&);
		void sendBroadcast(RakNet::RakNetGUID const&,Packet const&);
		void ~BatchedPacketSender();
		void ~BatchedPacketSender();
};
