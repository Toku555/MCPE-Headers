#pragma once
class StructureStart{
	public:
		void addAdditionalSaveData(CompoundTag &);
		void calculateBoundingBox(void);
		void createTag(int,int);
		void isValid(void);
		void load(Level *,CompoundTag *);
		void moveBelowSeaLevel(Random *,int);
		void moveInsideHeights(Random *,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~StructureStart();
		void ~StructureStart();
};
