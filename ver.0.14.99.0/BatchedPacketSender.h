#pragma once
class BatchedPacketSender{
	public:
		BatchedPacketSender(NetworkHandler &);
		BatchedPacketSender(NetworkHandler &);
		void _getBatch(RakNet::RakNetGUID const&);
		void _getBatch(RakNet::RakNetGUID const&);
		void _playerExists(RakNet::RakNetGUID const&);
		void _queuePacket(RakNet::RakNetGUID const&,Packet const&);
		void _queuePacket(RakNet::RakNetGUID const&,Packet const&);
		void addLoopbackCallback(NetEventCallback &);
		void addLoopbackCallback(NetEventCallback &);
		void flush(RakNet::RakNetGUID const&);
		void flush(RakNet::RakNetGUID const&);
		void removeLoopbackCallback(NetEventCallback &);
		void removeLoopbackCallback(NetEventCallback &);
		void send(Packet const&);
		void send(Packet const&);
		void send(RakNet::RakNetGUID const&,Packet const&);
		void send(RakNet::RakNetGUID const&,Packet const&);
		void sendBroadcast(RakNet::RakNetGUID const&,Packet const&);
		void sendBroadcast(RakNet::RakNetGUID const&,Packet const&);
		void setPlayerList(std::vector<std::unique_ptr<Player,std::default_delete<Player>>,std::allocator<std::unique_ptr<Player,std::default_delete<Player>>>> const*);
		void setPlayerList(std::vector<std::unique_ptr<Player,std::default_delete<Player>>,std::allocator<std::unique_ptr<Player,std::default_delete<Player>>>> const*);
		void update(void);
		void update(void);
		void ~BatchedPacketSender();
		void ~BatchedPacketSender();
		void ~BatchedPacketSender();
		void ~BatchedPacketSender();
};
