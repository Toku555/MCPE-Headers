#pragma once
class HugeMushroomBlock{
	public:
		HugeMushroomBlock(std::string const&,int,Material const&,HugeMushroomBlock::Type);
		HugeMushroomBlock(std::string const&,int,Material const&,HugeMushroomBlock::Type);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void ~HugeMushroomBlock();
		void ~HugeMushroomBlock();
};
