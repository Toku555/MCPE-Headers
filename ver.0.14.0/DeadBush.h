#pragma once
class DeadBush{
	public:
		DeadBush(std::string const&,int,std::string const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTessellatedUVs(void);
		void mayPlaceOn(Block const&);
		void playerDestroy(Player *,BlockPos const&,int);
		void ~DeadBush();
		void ~DeadBush();
};
