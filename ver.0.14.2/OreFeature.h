#pragma once
class OreFeature{
	public:
		OreFeature(BlockID,int);
		OreFeature(BlockID,uchar,int);
		void _isDiggable(BlockID);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~OreFeature();
		void ~OreFeature();
};
