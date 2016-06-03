#pragma once
class GrassBlock{
	public:
		GrassBlock(std::string const&,int);
		GrassBlock(std::string const&,int);
		void _getGrassSide(int);
		void _randomWalk(BlockSource &,BlockPos &,int);
		void _randomWalk(BlockSource &,BlockPos &,int);
		void calcVariant(BlockSource &,BlockPos const&,uchar);
		void calcVariant(BlockSource &,BlockPos const&,uchar);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getColor(int);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~GrassBlock();
		void ~GrassBlock();
		void ~GrassBlock();
		void ~GrassBlock();
};
