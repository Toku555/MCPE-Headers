#pragma once
class ExplodeComponent{
	public:
		ExplodeComponent(Entity &,float,bool,int);
		ExplodeComponent(Entity &,float,int);
		ExplodeComponent(Entity &,float,int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void explode(BlockSource &,Vec3 const&,float);
		void explode(BlockSource &,Vec3 const&,float);
		void getFuse(void);
		void getFuse(void);
		void isPrimed(void);
		void isPrimed(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setFuseLength(int);
		void setFuseLength(int);
		void tick(void);
		void tick(void);
		void triggerFuse(void);
		void triggerFuse(void);
};
