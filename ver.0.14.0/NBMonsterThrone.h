#pragma once
class NBMonsterThrone{
	public:
		NBMonsterThrone(int,Random &,BoundingBox const&,int);
		NBMonsterThrone(void);
		void addAdditionalSaveData(CompoundTag &);
		void createPiece(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~NBMonsterThrone();
		void ~NBMonsterThrone();
};
