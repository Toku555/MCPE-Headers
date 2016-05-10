#pragma once
class Farmland{
	public:
		Farmland(StartPiece *,int,Random &,BoundingBox const&,int);
		Farmland(void);
		void addAdditionalSaveData(CompoundTag &);
		void createPiece(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void selectCrops(Random &,StartPiece &);
		void ~Farmland();
		void ~Farmland();
};
