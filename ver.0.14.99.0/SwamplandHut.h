#pragma once
class SwamplandHut{
	public:
		SwamplandHut(Random &,int,int);
		SwamplandHut(Random &,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void placeCauldron(BlockSource *,Random &,int,int,int,BoundingBox const&);
		void placeCauldron(BlockSource *,Random &,int,int,int,BoundingBox const&);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void readAdditionalSaveData(CompoundTag &);
		void ~SwamplandHut();
		void ~SwamplandHut();
};
