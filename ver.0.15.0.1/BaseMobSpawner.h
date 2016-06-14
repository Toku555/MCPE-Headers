#pragma once
class BaseMobSpawner{
	public:
		BaseMobSpawner(EntityType);
		BaseMobSpawner(EntityType);
		void _delay(BlockSource &);
		void _delay(BlockSource &);
		void getDisplayEntity(BlockSource &);
		void getDisplayEntity(BlockSource &);
		void getNextSpawnData(void);
		void getOSpin(void);
		void getOSpin(void);
		void getSpawnTypeId(void);
		void getSpin(void);
		void getSpin(void);
		void isNearPlayer(BlockSource &);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void loadDataAndAddEntity(std::unique_ptr<Mob,std::default_delete<Mob>>);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setEntityId(EntityType);
		void setEntityId(EntityType);
		void setNextSpawnData(std::unique_ptr<SpawnData,std::default_delete<SpawnData>>);
		void tick(BlockSource &);
		void tick(BlockSource &);
		void ~BaseMobSpawner();
		void ~BaseMobSpawner();
		void ~BaseMobSpawner();
		void ~BaseMobSpawner();
};
