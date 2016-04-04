#pragma once
class EnchantingTableEntity{
	public:
		EnchantingTableEntity(BlockPos const&);
		void getName(void);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void tick(BlockSource &);
		void ~EnchantingTableEntity();
		void ~EnchantingTableEntity();
};
