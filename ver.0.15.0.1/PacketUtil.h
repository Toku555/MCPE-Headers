#pragma once
class PacketUtil{
	public:
		void byteToDegrees(signed char);
		void byteToDegrees(signed char);
		void degreesToByte(float);
		void degreesToByte(float);
		void readItemInstance(RakNet::BitStream *);
		void readItemInstance(RakNet::BitStream *);
		void readLongString(RakNet::BitStream *,std::string &);
		void readLongString(RakNet::BitStream *,std::string &);
		void readString(RakNet::BitStream *,std::string &);
		void readString(RakNet::BitStream *,std::string &);
		void readUUID(RakNet::BitStream *);
		void writeItemInstance(ItemInstance const&,RakNet::BitStream *,bool);
		void writeItemInstance(ItemInstance const&,RakNet::BitStream *,bool);
		void writeLongString(std::string const&,RakNet::BitStream *);
		void writeLongString(std::string const&,RakNet::BitStream *);
		void writeString(std::string const&,RakNet::BitStream *);
		void writeString(std::string const&,RakNet::BitStream *);
		void writeUUID(mce::UUID const&,RakNet::BitStream *);
};
