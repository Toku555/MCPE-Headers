#pragma once
class ThinFenceBlock{
	public:
		ThinFenceBlock(std::string const&,int,std::string const&,std::string const&,Material const&,bool);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void attachsTo(int);
		void getEdgeTexture(void);
		void getResource(Random &,int,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~ThinFenceBlock();
		void ~ThinFenceBlock();
};
