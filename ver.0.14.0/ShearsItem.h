#pragma once
class ShearsItem{
	public:
		void canDestroySpecial(Block const*);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantSlot(void);
		void mineBlock(ItemInstance *,BlockID,int,int,int,Mob *);
		void ~ShearsItem();
		void ~ShearsItem();
};
