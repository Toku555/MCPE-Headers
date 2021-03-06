#pragma once
class ChestMenu{
	public:
		ChestMenu(Player &,BlockPos const&);
		ChestMenu(Player &,EntityUniqueID);
		void _getChestBlockEntity(void);
		void getSlot(int);
		void isChestValid(void);
		void removeSlot(int,int);
		void setSlot(int,ItemInstance &);
		void updatePlayerSlotChanged(int,ItemInstance const&);
		void ~ChestMenu();
		void ~ChestMenu();
};
