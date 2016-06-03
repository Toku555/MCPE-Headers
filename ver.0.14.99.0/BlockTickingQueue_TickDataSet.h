#pragma once
namespace BlockTickingQueue{
	class TickDataSet{
		public:
		void remove(BlockPos const&,BlockID);
		void remove(BlockPos const&,BlockID);
		void add(BlockSource &,BlockPos const&,BlockID,int);
		void add(BlockSource &,BlockPos const&,BlockID,int);
		void isBlockToBeTickedAt(BlockPos const&,BlockID);
		void isBlockToBeTickedAt(BlockPos const&,BlockID);
		void isEmpty(void);
		void isEmpty(void);
		void isInstaticking(void);
		void isInstaticking(void);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void remove(BlockPos const&,BlockID);
		void remove(BlockPos const&,BlockID);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void tickAllPendingTicks(BlockSource &);
		void tickAllPendingTicks(BlockSource &);
		void tickPendingTicks(BlockSource &,Tick const&,int,bool);
		void tickPendingTicks(BlockSource &,Tick const&,int,bool);
	}
};
