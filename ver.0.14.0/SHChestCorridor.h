#pragma once
class SHChestCorridor{
	public:
		SHChestCorridor(int,Random &,BoundingBox const&,int);
		SHChestCorridor(void);
		void addAdditionalSaveData(CompoundTag &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void createPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~SHChestCorridor();
		void ~SHChestCorridor();
};
