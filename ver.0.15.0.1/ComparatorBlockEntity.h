#pragma once
class ComparatorBlockEntity{
	public:
		ComparatorBlockEntity(BlockPos const&);
		ComparatorBlockEntity(BlockPos const&);
		void getOutputSignal(void);
		void getOutputSignal(void);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setOutputSignal(int);
		void setOutputSignal(int);
		void tick(BlockSource &);
		void tick(BlockSource &);
		void ~ComparatorBlockEntity();
		void ~ComparatorBlockEntity();
};
