#pragma once
class TextPacket{
	public:
		void createTranslated(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~TextPacket();
		void ~TextPacket();
};
