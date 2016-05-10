#pragma once
class Well{
	public:
		Well(StartPiece *,int,Random &,BoundingBox const&,int);
		Well(StartPiece *,int,Random &,int,int);
		Well(void);
		void postProcess(BlockSource *,Random &,BoundingBox const&);
		void ~Well();
		void ~Well();
};
