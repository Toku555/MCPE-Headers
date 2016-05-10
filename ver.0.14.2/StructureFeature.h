#pragma once
class StructureFeature{
	public:
		void addFeature(LevelChunk &,BiomeSource *,Random &,int,int);
		void getStructureAt(int,int,int);
		void isInsideBoundingFeature(int,int,int);
		void isInsideFeature(int,int,int);
		void postProcess(BlockSource *,Random &,int,int);
		void postProcessMobsAt(BlockSource *,int,int,Random &);
		void ~StructureFeature();
		void ~StructureFeature();
};
