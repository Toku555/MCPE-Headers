#pragma once
class PortalBlock{
	public:
		PortalBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAxis(int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void mayPick(BlockSource &,int,bool);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void trySpawnPortal(BlockSource &,BlockPos const&);
		void ~PortalBlock();
		void ~PortalBlock();
};
