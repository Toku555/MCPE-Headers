#pragma once
class BottleItem{
	public:
		BottleItem(std::string const&,int);
		void isLiquidClipItem(int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~BottleItem();
		void ~BottleItem();
};
