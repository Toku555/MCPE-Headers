#pragma once
class UnderworldFeature{
	public:
		UnderworldFeature(uint);
		void addFeature(LevelChunk &,BiomeSource *,Random &,int,int);
		void apply(ChunkSource *,LevelChunk &,BiomeSource *,Random &);
		void ~UnderworldFeature();
		void ~UnderworldFeature();
};
