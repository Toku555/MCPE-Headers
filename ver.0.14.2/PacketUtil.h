#pragma once
class PacketUtil{
	public:
		void Rot_charToDegrees(signed char);
		void Rot_charToEntity(Entity &,signed char,signed char);
		void Rot_degreesToChar(float);
		void Rot_entityToChar(Entity const&,signed char &,signed char &);
		void readItemInstance(RakNet::BitStream *);
		void readString(RakNet::BitStream *,std::string &);
		void writeItemInstance(ItemInstance const&,RakNet::BitStream *,bool);
		void writeString(std::string const&,RakNet::BitStream *);
};
