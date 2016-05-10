#pragma once
class SpawnData{
	public:
		SpawnData(CompoundTag const&);
		SpawnData(int,EntityType);
		SpawnData(int,EntityType,CompoundTag *);
		SpawnData(void);
		void save(void);
		void ~SpawnData();
		void ~SpawnData();
};
