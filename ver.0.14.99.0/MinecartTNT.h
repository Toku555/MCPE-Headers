#pragma once
class MinecartTNT{
	public:
		MinecartTNT(BlockSource &);
		MinecartTNT(BlockSource &);
		MinecartTNT(BlockSource &,Vec3 const&);
		MinecartTNT(BlockSource &,Vec3 const&);
		void activateMinecart(BlockPos const&,bool);
		void activateMinecart(BlockPos const&,bool);
		void destroy(EntityDamageSource const&,bool);
		void destroy(EntityDamageSource const&,bool);
		void getDefaultDisplayBlock(void);
		void getDefaultDisplayBlock(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getFuse(void);
		void getFuse(void);
		void getType(void);
		void getType(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void isPrimed(void);
		void normalTick(void);
		void normalTick(void);
		void primeFuse(void);
		void primeFuse(void);
		void ~MinecartTNT();
		void ~MinecartTNT();
};
