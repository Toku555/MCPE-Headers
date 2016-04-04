#pragma once
class LogBlock{
	public:
		LogBlock(std::string const&,int);
		void getDirTexture(signed char,int);
		void getResourceCount(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void onRemove(BlockSource &,BlockPos const&);
		void ~LogBlock();
		void ~LogBlock();
};
