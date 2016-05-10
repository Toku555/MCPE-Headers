#pragma once
class MelonBlock{
	public:
		MelonBlock(std::string const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char);
		void ~MelonBlock();
		void ~MelonBlock();
};
