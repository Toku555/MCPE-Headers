#pragma once
class HoeItem{
	public:
		HoeItem(int,Item::Tier);
		void isHandEquipped(void);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~HoeItem();
		void ~HoeItem();
};
