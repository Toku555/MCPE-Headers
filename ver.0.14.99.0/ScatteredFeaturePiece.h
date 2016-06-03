#pragma once
class ScatteredFeaturePiece{
	public:
		ScatteredFeaturePiece(Random &,int,int,int,int,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void readAdditionalSaveData(CompoundTag &);
		void readAdditionalSaveData(CompoundTag &);
		void updateAverageGroundHeight(BlockSource *,BoundingBox const&,int);
		void updateAverageGroundHeight(BlockSource *,BoundingBox const&,int);
		void ~ScatteredFeaturePiece();
		void ~ScatteredFeaturePiece();
};
