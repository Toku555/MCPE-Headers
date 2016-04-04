#pragma once
class BrewingStandMenu{
	public:
		BrewingStandMenu(Player &,BlockPos const&);
		void _getBrewingStandEntity(void);
		void broadcastChanges(void);
		void getItems(void);
		void getSlot(int);
		void removeSlot(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~BrewingStandMenu();
		void ~BrewingStandMenu();
};
