#pragma once
class MineshaftStairs{
	public:
		MineshaftStairs(MineshaftData &);
		MineshaftStairs(MineshaftData &,int,Random &,BoundingBox const&,int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void findStairs(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void readAdditionalSaveData(CompoundTag &);
		void ~MineshaftStairs();
		void ~MineshaftStairs();
};
