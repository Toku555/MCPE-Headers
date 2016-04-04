#pragma once
class StrongholdStart{
	public:
		StrongholdStart(BiomeSource *,Random &,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void isValid(void);
		void readAdditionalSaveData(CompoundTag &);
		void ~StrongholdStart();
		void ~StrongholdStart();
};
