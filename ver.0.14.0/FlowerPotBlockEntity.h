#pragma once
class FlowerPotBlockEntity{
	public:
		FlowerPotBlockEntity(BlockPos const&);
		void getItemData(void);
		void getPlantItem(void);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void setPlantItem(Block *,int);
		void ~FlowerPotBlockEntity();
		void ~FlowerPotBlockEntity();
};
