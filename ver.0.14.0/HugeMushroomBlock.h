#pragma once
class HugeMushroomBlock{
	public:
		HugeMushroomBlock(std::string const&,int,Material const&,HugeMushroomBlock::Type);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~HugeMushroomBlock();
		void ~HugeMushroomBlock();
};
