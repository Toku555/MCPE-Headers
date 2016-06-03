#pragma once
class PickaxeItem{
	public:
		PickaxeItem(std::string const&,int,Item::Tier const&);
		PickaxeItem(std::string const&,int,Item::Tier const&);
		void canDestroySpecial(Block const*);
		void canDestroySpecial(Block const*);
		void getDestroySpeed(ItemInstance *,Block *);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantSlot(void);
		void getEnchantSlot(void);
		void ~PickaxeItem();
		void ~PickaxeItem();
};
