#pragma once
class ComparatorBlockEntity{
	public:
		ComparatorBlockEntity(BlockPos const&);
		void getOutputSignal(void);
		void load(CompoundTag &);
		void save(CompoundTag &);
		void setOutputSignal(int);
		void tick(BlockSource &);
		void ~ComparatorBlockEntity();
		void ~ComparatorBlockEntity();
};
