#pragma once
class MinecartTNT{
	public:
		MinecartTNT(BlockSource &);
		MinecartTNT(BlockSource &,Vec3 const&);
		void activateMinecart(BlockPos const&,bool);
		void destroy(EntityDamageSource const&,bool);
		void getDefaultDisplayBlock(void);
		void getEntityTypeId(void);
		void getFuse(void);
		void getType(void);
		void handleEntityEvent(EntityEvent);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void isPrimed(void);
		void normalTick(void);
		void primeFuse(void);
		void ~MinecartTNT();
		void ~MinecartTNT();
};
