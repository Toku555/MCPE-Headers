#pragma once
class TextPacket{
	public:
		TextPacket(TextPacketType,std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		TextPacket(TextPacketType,std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void createRaw(std::string const&);
		void createRaw(std::string const&);
		void createSystemMessage(std::string const&);
		void createSystemMessage(std::string const&);
		void createTranslated(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void createTranslated(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~TextPacket();
		void ~TextPacket();
		void ~TextPacket();
		void ~TextPacket();
};
