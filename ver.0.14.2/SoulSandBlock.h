#pragma once
class SoulSandBlock{
	public:
		SoulSandBlock(std::string const&,int);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void ~SoulSandBlock();
		void ~SoulSandBlock();
};
