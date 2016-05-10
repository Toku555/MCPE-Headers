#pragma once
class VillagePiece{
	public:
		VillagePiece(StartPiece *,int);
		VillagePiece(void);
		void addAdditionalSaveData(CompoundTag &);
		void biomeBlock(FullBlock);
		void fillColumnDown(BlockSource *,FullBlock,int,int,int,BoundingBox const&);
		void findAndCreatePieceFactory(StartPiece *,PieceWeight &,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void generateAndAddPiece(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void generateAndAddRoadPiece(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void generateBox(BlockSource *,BoundingBox const&,int,int,int,int,int,int,FullBlock,FullBlock,bool);
		void generateHouseNorthernLeft(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int);
		void generateHouseNorthernRight(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int);
		void generatePieceFromSmallDoor(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void getAverageGroundHeight(BlockSource *,BoundingBox const&);
		void getVillagerProfession(int);
		void isOkBox(BoundingBox const&);
		void placeBlock(BlockSource *,FullBlock,int,int,int,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void spawnVillagers(BlockSource *,BoundingBox const&,int,int,int,int);
		void ~VillagePiece();
		void ~VillagePiece();
};
