#pragma once
class SlabTile{
	public:
		SlabTile(int,std::string const&,bool,Material const*);
		void addAABBs(Level *,int,int,int,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getResourceCount(Random *);
		void getTileType(void);
		void isBottomSlab(LevelSource *,int,int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void ~SlabTile();
		void ~SlabTile();
};
