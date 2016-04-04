#pragma once
class MinecartChest{
	public:
		MinecartChest(BlockSource &);
		MinecartChest(BlockSource &,Vec3 const&);
		void applyNaturalSlowdown(void);
		void containerChanged(int);
		void destroy(EntityDamageSource const&,bool);
		void getDefaultDisplayBlock(void);
		void getEntityTypeId(void);
		void getType(void);
		void interactWithPlayer(Player &);
		void ~MinecartChest();
		void ~MinecartChest();
};
