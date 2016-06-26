#pragma once
class Throwable{
	public:
		Throwable(Level *);
		Throwable(Level *,Mob *);
		Throwable(Level *,float,float,float);
		void _init(void);
		void addAdditonalSaveData(CompoundTag *);
		void getAuxData(void);
		void getGravity(void);
		void getShadowHeightOffs(void);
		void getThrowPower(void);
		void getThrowUpAngleOffset(void);
		void lerpMotion(float,float,float);
		void readAdditionalSaveData(CompoundTag *);
		void shoot(Vec3 const&,float,float);
		void shoot(float,float,float,float,float);
		void shouldRenderAtSqrDistance(float);
		void tick(void);
		void ~Throwable();
		void ~Throwable();
};
