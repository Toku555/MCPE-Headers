#pragma once
class MineshaftCorridor{
	public:
		MineshaftCorridor(MineshaftData &);
		MineshaftCorridor(MineshaftData &,int,Random &,BoundingBox const&,int);
		void _placeCobWeb(BlockSource *,BoundingBox const&,Random &,float,int,int,int);
		void _placeSupport(BlockSource *,BoundingBox const&,int,int,int,int,int,Random &);
		void addAdditionalSaveData(CompoundTag &);
		void addChildren(StructurePiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &);
		void findCorridorSize(std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void postProcessMobsAt(BlockSource *,Random &,BoundingBox const&);
		void readAdditionalSaveData(CompoundTag &);
		void ~MineshaftCorridor();
		void ~MineshaftCorridor();
};
