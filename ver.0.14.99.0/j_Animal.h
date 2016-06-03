#pragma once
namespace j{
	class Animal{
		public:
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void hurt(EntityDamageSource const&,int);
		void readAdditionalSaveData(CompoundTag const&);
	}
};
