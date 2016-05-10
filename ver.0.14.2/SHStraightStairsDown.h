#pragma once
class SHStraightStairsDown{
	public:
		SHStraightStairsDown(int,Random &,BoundingBox const&,int);
		SHStraightStairsDown(void);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void createPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void ~SHStraightStairsDown();
		void ~SHStraightStairsDown();
};
