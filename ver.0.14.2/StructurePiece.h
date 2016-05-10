#pragma once
class StructurePiece{
	public:
		void _getWorldPos(int,int,int);
		void addChildren(StructurePiece*,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void createChest(BlockSource *,BoundingBox const&,Random &,int,int,int,int,std::vector<WeighedTreasureItem,std::allocator<WeighedTreasureItem>> const&,int);
		void createDoor(BlockSource *,BoundingBox const&,Random &,int,int,int,int);
		void createTag(void);
		void edgesLiquid(BlockSource *,BoundingBox const&);
		void fillColumnDown(BlockSource *,FullBlock,int,int,int,BoundingBox const&);
		void findCollisionPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> const&,BoundingBox const&);
		void generateAirBox(BlockSource *,BoundingBox const&,int,int,int,int,int,int);
		void generateAirColumnUp(BlockSource *,int,int,int,BoundingBox const&);
		void generateBox(BlockSource *,BoundingBox const&,BoundingBox const&,BlockID,BlockID,bool);
		void generateBox(BlockSource *,BoundingBox const&,BoundingBox const&,bool,Random &,BlockSelector *);
		void generateBox(BlockSource *,BoundingBox const&,int,int,int,int,int,int,BlockID,uchar,BlockID,uchar,bool);
		void generateBox(BlockSource *,BoundingBox const&,int,int,int,int,int,int,FullBlock,FullBlock,bool);
		void generateBox(BlockSource *,BoundingBox const&,int,int,int,int,int,int,bool,Random &,BlockSelector *);
		void generateMaybeBox(BlockSource *,BoundingBox const&,Random &,float,int,int,int,int,int,int,BlockID,BlockID,bool,Brightness);
		void generateUpperHalfSphere(BlockSource *,BoundingBox const&,int,int,int,int,int,int,BlockID,bool);
		void getBlock(BlockSource *,int,int,int,BoundingBox const&);
		void getBrightness(int,int,int,BlockSource *);
		void getLocatorPosition(void);
		void getOrientationData(Block *,uchar);
		void getTorchData(uchar);
		void getTotalWeight(std::vector<PieceWeight,std::allocator<PieceWeight>> const&);
		void getWorldX(int,int);
		void getWorldY(int);
		void getWorldZ(int,int);
		void isAir(BlockSource *,int,int,int,BoundingBox const&);
		void isInChunk(ChunkPos const&);
		void maybeGenerateBlock(BlockSource *,BoundingBox const&,Random &,float,int,int,int,BlockID,uchar);
		void placeBlock(BlockSource *,FullBlock,int,int,int,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void ~StructurePiece();
		void ~StructurePiece();
};
