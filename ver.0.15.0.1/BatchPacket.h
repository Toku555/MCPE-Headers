#pragma once
class BatchPacket{
	public:
		void add(Packet const*);
		void add(Packet const*);
		void compress(void);
		void compress(void);
		void getDebugStats(std::vector<BatchPacket::Stats,std::allocator<BatchPacket::Stats>> &);
		void getDebugStats(std::vector<BatchPacket::Stats,std::allocator<BatchPacket::Stats>> &);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~BatchPacket();
		void ~BatchPacket();
		void ~BatchPacket();
		void ~BatchPacket();
};
