#pragma once
class DatagramHeaderFormat{
	public:
		void Deserialize(RakNet::BitStream *);
		void Serialize(RakNet::BitStream *);
};
