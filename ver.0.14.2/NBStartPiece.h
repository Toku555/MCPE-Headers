#pragma once
class NBStartPiece{
	public:
		NBStartPiece(Random &,int,int);
		NBStartPiece(void);
		void addAdditionalSaveData(CompoundTag &);
		void readAdditionalSaveData(CompoundTag &);
		void ~NBStartPiece();
		void ~NBStartPiece();
};
