#pragma once
class HangingEntity{
	public:
		HangingEntity(BlockSource &);
		HangingEntity(BlockSource &);
		HangingEntity(BlockSource &,BlockPos const&,int);
		HangingEntity(BlockSource &,BlockPos const&,int);
		void _offs(int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void dropItem(void);
		void getBlockPos(void);
		void getBlockPos(void);
		void getBrightness(float);
		void getBrightness(float);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void init(void);
		void isPickable(void);
		void isPickable(void);
		void move(Vec3 const&);
		void move(Vec3 const&);
		void normalTick(void);
		void normalTick(void);
		void push(Vec3 const&);
		void push(Vec3 const&);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setDir(int);
		void setDir(int);
		void setPosition(BlockPos const&);
		void survives(void);
		void survives(void);
		void ~HangingEntity();
		void ~HangingEntity();
};
