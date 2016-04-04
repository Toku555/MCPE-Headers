#pragma once
class Fireball{
	public:
		Fireball(BlockSource &);
		Fireball(BlockSource &,Vec3 const&,Vec3 const&);
		Fireball(Mob &,Vec3 const&);
		void _defineEntityData(void);
		void _getPower(void);
		void _init(void);
		void _setPower(Vec3 const&);
		void addAdditionalSaveData(CompoundTag &);
		void getBrightness(float);
		void getInertia(void);
		void getPickRadius(void);
		void getShadowHeightOffs(void);
		void getSourceUniqueID(void);
		void hurt(EntityDamageSource const&,int);
		void isPickable(void);
		void lerpMotion(Vec3 const&);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void shouldRenderAtSqrDistance(float);
		void ~Fireball();
		void ~Fireball();
};
