#pragma once
class HoeItem{
	public:
		HoeItem(std::string const&,int,Item::Tier);
		void getEnchantSlot(void);
		void isHandEquipped(void);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~HoeItem();
		void ~HoeItem();
};
