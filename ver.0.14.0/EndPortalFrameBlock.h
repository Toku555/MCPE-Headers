#pragma once
class EndPortalFrameBlock{
	public:
		EndPortalFrameBlock(std::string const&,int);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getEyeTexture(void);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char,int);
		void hasEye(int);
		void ~EndPortalFrameBlock();
		void ~EndPortalFrameBlock();
};
