#pragma once
class PickaxeItem{
	public:
		PickaxeItem(int,Item::Tier const&);
		void canDestroySpecial(Tile const*);
		void getDestroySpeed(ItemInstance *,Tile *);
		void ~PickaxeItem();
		void ~PickaxeItem();
};
