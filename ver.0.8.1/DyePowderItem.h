#pragma once
class DyePowderItem{
	public:
		DyePowderItem(int);
		void getDescriptionId(ItemInstance const*);
		void getIcon(int,int,bool);
		void getName(ItemInstance const*);
		void interactEnemy(ItemInstance *,Mob *,Player *);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~DyePowderItem();
		void ~DyePowderItem();
};
