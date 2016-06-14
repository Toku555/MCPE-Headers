#pragma once
class PlayerListEntry{
	public:
		PlayerListEntry(Player const&);
		PlayerListEntry(Player const&);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
};
