#pragma once
class ObsidianBlock{
	public:
		ObsidianBlock(std::string const&,int,bool);
		ObsidianBlock(std::string const&,int,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void poofParticles(BlockSource &,BlockPos const&);
		void poofParticles(BlockSource &,BlockPos const&);
		void ~ObsidianBlock();
		void ~ObsidianBlock();
};
