#pragma once
class HangingEntityItem{
	public:
		HangingEntityItem(int,int);
		void createEntity(Level *,int,int,int,int);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~HangingEntityItem();
		void ~HangingEntityItem();
};
