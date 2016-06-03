#pragma once
class ThinFenceBlock{
	public:
		ThinFenceBlock(std::string const&,int,Material const&,bool);
		ThinFenceBlock(std::string const&,int,Material const&,bool);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void attachsTo(int);
		void attachsTo(int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~ThinFenceBlock();
		void ~ThinFenceBlock();
};
