#pragma once
class VillageStart{
	public:
		VillageStart(BiomeSource *,Random &,int,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void isValid(void);
		void readAdditionalSaveData(CompoundTag &);
		void ~VillageStart();
		void ~VillageStart();
};
