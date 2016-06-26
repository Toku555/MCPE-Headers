#pragma once
class DiggerItem{
	public:
		void getAttackDamage(Entity *);
		void getDestroySpeed(ItemInstance *,Tile *);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void isHandEquipped(void);
		void mineBlock(ItemInstance *,int,int,int,int,Mob *);
		void setTiles(std::vector<Tile *,std::allocator<Tile *>> const&);
		void ~DiggerItem();
		void ~DiggerItem();
};
