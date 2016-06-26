#pragma once
class MonsterPlacerItem{
	public:
		MonsterPlacerItem(int);
		void getIcon(int,int,bool);
		void getName(ItemInstance const*);
		void spawnMobAt(Level *,int,float,float,float);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~MonsterPlacerItem();
		void ~MonsterPlacerItem();
};
