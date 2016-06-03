#pragma once
namespace j{
	class PacketUtil{
		public:
		void byteToDegrees(signed char);
		void readLongString(RakNet::BitStream *,std::string &);
		void readString(RakNet::BitStream *,std::string &);
		void readString(RakNet::BitStream *,std::string &);
	}
};
