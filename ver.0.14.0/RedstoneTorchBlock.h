#pragma once
class RedstoneTorchBlock{
	public:
		RedstoneTorchBlock(std::string const&,int,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getTickDelay(void);
		void installCircuit(BlockSource &,BlockPos const&,bool);
		void isRedstoneBlock(void);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~RedstoneTorchBlock();
		void ~RedstoneTorchBlock();
};
