#pragma once
class Sapling{
	public:
		Sapling(int,std::string const&);
		void getSpawnResourcesAuxValue(int);
		void getTexture(int,int);
		void growTree(Level *,int,int,int,Random *);
		void onFertilized(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~Sapling();
		void ~Sapling();
};
