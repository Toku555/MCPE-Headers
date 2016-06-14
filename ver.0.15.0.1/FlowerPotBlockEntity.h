#pragma once
class FlowerPotBlockEntity{
	public:
		FlowerPotBlockEntity(BlockPos const&);
		FlowerPotBlockEntity(BlockPos const&);
		void getItemData(void);
		void getItemData(void);
		void getPlantItem(void);
		void getPlantItem(void);
		void getUpdatePacket(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void onUpdatePacket(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setPlantItem(Block *,int);
		void setPlantItem(Block *,int);
		void ~FlowerPotBlockEntity();
		void ~FlowerPotBlockEntity();
};
