#pragma once
class SmallHut{
	public:
		SmallHut(StartPiece *,int,Random &,BoundingBox const&,int);
		SmallHut(void);
		void addAdditionalSaveData(CompoundTag &);
		void createPiece(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~SmallHut();
		void ~SmallHut();
};
