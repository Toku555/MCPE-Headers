#pragma once
class Throwable{
	public:
		Throwable(BlockSource &);
		Throwable(BlockSource &,Vec3 const&);
		Throwable(Mob &);
		void addAdditionalSaveData(CompoundTag &);
		void getGravity(void);
		void getParticleType(void);
		void getShadowHeightOffs(void);
		void getSourceUniqueID(void);
		void getThrowPower(void);
		void getThrowUpAngleOffset(void);
		void lerpMotion(Vec3 const&);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void shoot(Mob &);
		void shoot(Vec3 const&,float,float,Vec3 const&);
		void stopUponGroundCollision(void);
		void throwableHit(HitResult const&,int,int);
		void ~Throwable();
		void ~Throwable();
};
