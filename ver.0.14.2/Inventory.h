#pragma once
class Inventory{
	public:
		Inventory(Player *);
		void add(ItemInstance &,bool);
		void canAdd(ItemInstance const&);
		void canDestroy(Block &);
		void clearInventoryWithDefault(bool);
		void clearSlot(int);
		void doDrop(ItemInstance &,bool);
		void dropAll(bool);
		void getAttackDamage(void);
		void getContainerSize(void);
		void getDestroySpeed(Block &);
		void getEmptySlotsCount(void);
		void getLinkedSlotForExactItem(ItemInstance const&);
		void getLinkedSlotForItem(int);
		void getLinkedSlotForItemIdAndAux(int,int);
		void getSelectedItem(void);
		void getSelectedSlot(void);
		void getSelectionSize(void);
		void load(ListTag const&);
		void moveToEmptySelectionSlot(int);
		void moveToSelectedSlot(int);
		void moveToSelectionSlot(int,int);
		void removeItemInstance(ItemInstance const*);
		void selectSlot(int);
		void setContainerSize(int);
		void setupDefault(void);
		void tick(void);
		void ~Inventory();
		void ~Inventory();
};
