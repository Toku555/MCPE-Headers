#pragma once
class LargeHellCaveFeature{
	public:
		void addFeature(LevelChunk &,BiomeSource *,Random &,int,int);
		void addRoom(Random &,LevelChunk &,Vec3 const&);
		void addTunnel(Random &,LevelChunk &,Vec3 const&,float,float,float,int,int,float);
		void ~LargeHellCaveFeature();
		void ~LargeHellCaveFeature();
};
