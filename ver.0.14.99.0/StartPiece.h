#pragma once
class StartPiece{
	public:
		StartPiece(BiomeSource *,int,Random &,int,int,std::vector<PieceWeight,std::allocator<PieceWeight>> &,int,bool);
		StartPiece(BiomeSource *,int,Random &,int,int,std::vector<PieceWeight,std::allocator<PieceWeight>> &,int,bool);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void getBiomeSource(void);
		void getPieceWeights(void);
		void ~StartPiece();
		void ~StartPiece();
		void ~StartPiece();
		void ~StartPiece();
};