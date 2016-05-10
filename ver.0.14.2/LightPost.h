#pragma once
class LightPost{
	public:
		LightPost(StartPiece *,int,Random &,BoundingBox const&,int);
		LightPost(void);
		void findPieceBox(StartPiece *,std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>> &,Random &,int,int,int,int);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void ~LightPost();
		void ~LightPost();
};
