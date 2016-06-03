#pragma once
class BlockSourceListener{
	public:
		void onAreaChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onAreaChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockEntityChanged(BlockSource &,BlockEntity &);
		void onBlockEntityChanged(BlockSource &,BlockEntity &);
		void onBlockEntityRemoved(BlockSource &,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void onBlockEntityRemoved(BlockSource &,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void onBlockEvent(BlockSource &,int,int,int,int,int);
		void onBlockEvent(BlockSource &,int,int,int,int,int);
		void onBlocksDirty(BlockSource &,BlockPos const&,BlockPos const&);
		void onBlocksDirty(BlockSource &,BlockPos const&,BlockPos const&);
		void onBrightnessChanged(BlockSource &,BlockPos const&);
		void onBrightnessChanged(BlockSource &,BlockPos const&);
		void onEntityChanged(BlockSource &,Entity &);
		void onEntityChanged(BlockSource &,Entity &);
		void onSourceCreated(BlockSource &);
		void onSourceCreated(BlockSource &);
		void onSourceDestroyed(BlockSource &);
		void onSourceDestroyed(BlockSource &);
		void ~BlockSourceListener();
		void ~BlockSourceListener();
		void ~BlockSourceListener();
		void ~BlockSourceListener();
};
