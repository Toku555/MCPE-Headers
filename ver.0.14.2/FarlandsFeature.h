#pragma once
class FarlandsFeature{
	public:
		FarlandsFeature(uint,int,int);
		void addFeature(LevelChunk &,BiomeSource *,Random &,int,int);
		void apply(ChunkSource *,LevelChunk &,BiomeSource *,Random &);
		void isInsideLimit(LevelChunk const&,float);
		void ~FarlandsFeature();
		void ~FarlandsFeature();
};
