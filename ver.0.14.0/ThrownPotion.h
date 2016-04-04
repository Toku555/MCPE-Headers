#pragma once
class ThrownPotion{
	public:
		ThrownPotion(BlockSource &);
		ThrownPotion(BlockSource &,Vec3 const&,ItemInstance const&);
		ThrownPotion(Mob &,ItemInstance const&);
		void _dowseFire(BlockPos const&);
		void addAdditionalSaveData(CompoundTag &);
		void getEntityTypeId(void);
		void getGravity(void);
		void getPotionId(void);
		void getThrowPower(void);
		void getThrowUpAngleOffset(void);
		void init(short,bool);
		void onHit(HitResult const&);
		void readAdditionalSaveData(CompoundTag const&);
		void ~ThrownPotion();
		void ~ThrownPotion();
};
