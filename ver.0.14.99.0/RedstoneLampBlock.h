#pragma once
class RedstoneLampBlock{
	public:
		RedstoneLampBlock(std::string const&,int,bool);
		RedstoneLampBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~RedstoneLampBlock();
		void ~RedstoneLampBlock();
};
