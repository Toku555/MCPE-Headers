#pragma once
class BaseMobSpawner{
	public:
		BaseMobSpawner(EntityType);
		void _delay(BlockSource &);
		void getDisplayEntity(BlockSource &);
		void getNextSpawnData(void);
		void getOSpin(void);
		void getSpawnTypeId(void);
		void getSpin(void);
		void isNearPlayer(BlockSource &);
		void load(CompoundTag &);
		void loadDataAndAddEntity(std::unique_ptr<Mob,std::default_delete<Mob>>);
		void save(CompoundTag &);
		void setEntityId(EntityType);
		void setNextSpawnData(std::unique_ptr<SpawnData,std::default_delete<SpawnData>>);
		void tick(BlockSource &);
		void ~BaseMobSpawner();
		void ~BaseMobSpawner();
};
