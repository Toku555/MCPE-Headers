#pragma once
class ChestMenu{
	public:
		ChestMenu(Player &,BlockPos const&);
		ChestMenu(Player &,BlockPos const&);
		ChestMenu(Player &,EntityUniqueID);
		ChestMenu(Player &,EntityUniqueID);
		void _getChestBlockEntity(void);
		void _getChestBlockEntity(void);
		void getSlot(int);
		void getSlot(int);
		void isChestValid(float);
		void isChestValid(float);
		void removeSlot(int,int);
		void removeSlot(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void updatePlayerSlotChanged(int,ItemInstance const&);
		void ~ChestMenu();
		void ~ChestMenu();
};
