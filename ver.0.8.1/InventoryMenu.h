#pragma once
class InventoryMenu{
	public:
		InventoryMenu(Container *);
		void getItems(void);
		void setSlot(int,ItemInstance *);
		void tileEntityDestroyedIsInvalid(int);
		void ~InventoryMenu();
		void ~InventoryMenu();
};
