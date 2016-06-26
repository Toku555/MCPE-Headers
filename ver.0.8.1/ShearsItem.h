#pragma once
class ShearsItem{
	public:
		void canDestroySpecial(Tile const*);
		void getDestroySpeed(ItemInstance *,Tile *);
		void mineBlock(ItemInstance *,int,int,int,int,Mob *);
		void ~ShearsItem();
		void ~ShearsItem();
};
