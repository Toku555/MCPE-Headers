#pragma once
class NBCastleCorridorTBalconyPiece{
	public:
		NBCastleCorridorTBalconyPiece(int,Random &,BoundingBox const&,int);
		NBCastleCorridorTBalconyPiece(void);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void createPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void ~NBCastleCorridorTBalconyPiece();
		void ~NBCastleCorridorTBalconyPiece();
};
