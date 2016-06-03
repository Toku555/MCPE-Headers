#pragma once
class NBCastleSmallCorridorCrossingPiece{
	public:
		NBCastleSmallCorridorCrossingPiece(int,Random &,BoundingBox const&,int);
		NBCastleSmallCorridorCrossingPiece(void);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void createPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void ~NBCastleSmallCorridorCrossingPiece();
		void ~NBCastleSmallCorridorCrossingPiece();
};
