#pragma once
class ObsidianBlock{
	public:
		ObsidianBlock(std::string const&,int,std::string const&,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void poofParticles(BlockSource &,BlockPos const&);
		void ~ObsidianBlock();
		void ~ObsidianBlock();
};
