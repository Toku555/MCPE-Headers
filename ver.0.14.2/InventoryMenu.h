#pragma once
class InventoryMenu{
	public:
		InventoryMenu(Player &,Container *);
		void getItems(void);
		void getSlot(int);
		void removeSlot(int,int);
		void setSlot(int,ItemInstance &);
		void ~InventoryMenu();
		void ~InventoryMenu();
};
