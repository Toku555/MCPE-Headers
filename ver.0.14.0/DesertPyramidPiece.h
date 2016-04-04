#pragma once
class DesertPyramidPiece{
	public:
		DesertPyramidPiece(Random &,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~DesertPyramidPiece();
		void ~DesertPyramidPiece();
};
