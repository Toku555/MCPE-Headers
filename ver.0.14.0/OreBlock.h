#pragma once
class OreBlock{
	public:
		OreBlock(std::string const&,int,std::string const&);
		void getExperienceDrop(Random &);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void ~OreBlock();
		void ~OreBlock();
};
