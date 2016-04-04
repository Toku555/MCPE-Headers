#pragma once
class SimpleHouse{
	public:
		SimpleHouse(StartPiece *,int,Random &,BoundingBox const&,int);
		SimpleHouse(void);
		void addAdditionalSaveData(CompoundTag &);
		void createPiece(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~SimpleHouse();
		void ~SimpleHouse();
};
