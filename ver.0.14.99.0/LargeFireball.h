#pragma once
class LargeFireball{
	public:
		LargeFireball(BlockSource &);
		LargeFireball(BlockSource &);
		LargeFireball(BlockSource &,Vec3 const&,Vec3 const&);
		LargeFireball(Mob &,Vec3 const&);
		LargeFireball(Mob &,Vec3 const&);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void onHit(HitResult const&);
		void onHit(HitResult const&);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setExplosionPower(int);
		void setExplosionPower(int);
		void ~LargeFireball();
		void ~LargeFireball();
};
