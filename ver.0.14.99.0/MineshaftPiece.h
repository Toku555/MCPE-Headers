#pragma once
class MineshaftPiece{
	public:
		void _isSupportingBox(int,int,BlockSource *,int,int);
		void _isSupportingBox(int,int,BlockSource *,int,int);
		void createChest(BlockSource *,BoundingBox const&,Random &,int,int,int,int,std::vector<WeighedTreasureItem,std::allocator<WeighedTreasureItem>> const&,int);
		void createChest(BlockSource *,BoundingBox const&,Random &,int,int,int,int,std::vector<WeighedTreasureItem,std::allocator<WeighedTreasureItem>> const&,int);
		void createRandomShaftPiece(MineshaftData &,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void createRandomShaftPiece(MineshaftData &,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void generateAndAddPiece(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void generateAndAddPiece(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void ~MineshaftPiece();
		void ~MineshaftPiece();
};
