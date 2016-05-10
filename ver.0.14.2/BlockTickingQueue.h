#pragma once
class BlockTickingQueue{
	public:
		void add(BlockSource &,BlockPos const&,BlockID,int);
		void isBlockToBeTickedAt(BlockPos const&,BlockID);
		void isEmpty(void);
		void isInstaticking(void);
		void load(CompoundTag const&);
		void remove(BlockPos const&,BlockID);
		void save(CompoundTag &);
		void tickAllPendingTicks(BlockSource &);
		void tickPendingTicks(BlockSource &,Tick const&,int,bool);
};
