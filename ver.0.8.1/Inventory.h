#pragma once
class Inventory{
	public:
		Inventory(Player *,bool);
		void add(ItemInstance *);
		void canDestroy(Tile *);
		void clearInventoryWithDefault(void);
		void doDrop(ItemInstance *,bool);
		void getAttackDamage(Entity *);
		void getContainerSize(void);
		void getDestroySpeed(Tile *);
		void getLinkedSlotForItem(int);
		void getLinkedSlotForItemIdAndAux(int,int);
		void getSelected(void);
		void getSelectionSize(void);
		void moveToEmptySelectionSlot(int);
		void moveToSelectedSlot(int);
		void moveToSelectionSlot(int,int);
		void removeItemInstance(ItemInstance const*);
		void selectSlot(int);
		void setupDefault(void);
		void stillValid(Player *);
		void ~Inventory();
		void ~Inventory();
};
