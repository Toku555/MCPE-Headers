#pragma once
class ExperienceOrb{
	public:
		ExperienceOrb(BlockSource &);
		ExperienceOrb(BlockSource &,Vec3 const&,int,Player *);
		void _init(int);
		void addAdditionalSaveData(CompoundTag &);
		void burn(int);
		void getEntityTypeId(void);
		void getIconIndex(void);
		void getShadowRadius(void);
		void getValue(void);
		void hurt(EntityDamageSource const&,int);
		void normalTick(void);
		void playerTouch(Player &);
		void readAdditionalSaveData(CompoundTag const&);
		void setValue(int);
		void spawnOrbs(BlockSource &,Vec3 const&,int,Player *);
		void spawnOrbs(BlockSource &,Vec3 const&,int,int,Player *);
		void truncateExperienceAmount(int);
		void ~ExperienceOrb();
		void ~ExperienceOrb();
};
