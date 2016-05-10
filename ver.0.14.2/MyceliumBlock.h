#pragma once
class MyceliumBlock{
	public:
		MyceliumBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void getResource(Random &,int,int);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~MyceliumBlock();
		void ~MyceliumBlock();
};
