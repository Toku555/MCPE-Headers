#pragma once
class MinecartHopper{
	public:
		MinecartHopper(BlockSource &);
		MinecartHopper(BlockSource &);
		MinecartHopper(BlockSource &,Vec3 const&);
		MinecartHopper(BlockSource &,Vec3 const&);
		void activateMinecart(BlockPos const&,bool);
		void activateMinecart(BlockPos const&,bool);
		void applyNaturalSlowdown(void);
		void applyNaturalSlowdown(void);
		void destroy(EntityDamageSource const&,bool);
		void destroy(EntityDamageSource const&,bool);
		void getDefaultDisplayBlock(void);
		void getDefaultDisplayBlock(void);
		void getDefaultDisplayOffset(void);
		void getDefaultDisplayOffset(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getType(void);
		void getType(void);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void normalTick(void);
		void normalTick(void);
		void pullInItems(void);
		void pullInItems(void);
		void ~MinecartHopper();
		void ~MinecartHopper();
};
