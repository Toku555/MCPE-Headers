#pragma once
class MobSpawnerBlockEntity{
	public:
		MobSpawnerBlockEntity(BlockPos const&);
		void getSpawner(void);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void tick(BlockSource &);
		void ~MobSpawnerBlockEntity();
		void ~MobSpawnerBlockEntity();
};
