#pragma once
class ShovelItem{
	public:
		ShovelItem(std::string const&,int,Item::Tier const&);
		void canDestroySpecial(Block const*);
		void getEnchantSlot(void);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~ShovelItem();
		void ~ShovelItem();
};
