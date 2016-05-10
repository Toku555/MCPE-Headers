#pragma once
class MineshaftRoom{
	public:
		MineshaftRoom(MineshaftData &);
		MineshaftRoom(MineshaftData &,int,Random &,int,int);
		void addAdditionalSaveData(CompoundTag &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~MineshaftRoom();
		void ~MineshaftRoom();
};
