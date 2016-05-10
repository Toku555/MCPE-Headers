#pragma once
class CraftingDataEntry{
	public:
		void fillFromRecipe(Recipe const&);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
};
