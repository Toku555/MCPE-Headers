#pragma once
namespace j{
	class BatchedPacketSender{
		public:
		void _queuePacket(RakNet::RakNetGUID const&,Packet const&);
		void setPlayerList(std::vector<std::unique_ptr<Player,std::default_delete<Player>>,std::allocator<std::unique_ptr<Player,std::default_delete<Player>>>> const*);
	}
};
