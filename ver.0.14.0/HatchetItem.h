#pragma once
class HatchetItem{
	public:
		HatchetItem(std::string const&,int,Item::Tier const&);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantSlot(void);
		void ~HatchetItem();
		void ~HatchetItem();
};
