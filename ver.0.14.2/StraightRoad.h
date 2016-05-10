#pragma once
class StraightRoad{
	public:
		StraightRoad(StartPiece *,int,Random &,BoundingBox const&,int);
		StraightRoad(void);
		void addAdditionalSaveData(CompoundTag &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void findPieceBox(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~StraightRoad();
		void ~StraightRoad();
};
