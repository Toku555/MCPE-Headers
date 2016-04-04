#pragma once
class GrassBlock{
	public:
		GrassBlock(std::string const&,int);
		void _getGrassSide(int);
		void _randomWalk(BlockSource &,BlockPos &,int);
		void getCarriedTexture(signed char,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char,int);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~GrassBlock();
		void ~GrassBlock();
};
