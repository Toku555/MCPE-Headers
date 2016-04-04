#pragma once
class BlockSourceListener{
	public:
		void onAreaChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockEntityChanged(BlockSource &,BlockEntity &);
		void onBlockEntityRemoved(BlockSource &,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void onBlockEvent(BlockSource &,int,int,int,int,int);
		void onBlocksDirty(BlockSource &,int,int,int,int,int,int);
		void onBrightnessChanged(BlockSource &,BlockPos const&);
		void onEntityChanged(BlockSource &,Entity &);
		void onSourceCreated(BlockSource &);
		void onSourceDestroyed(BlockSource &);
		void ~BlockSourceListener();
		void ~BlockSourceListener();
};
