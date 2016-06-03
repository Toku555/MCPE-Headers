#pragma once
class AirBlock{
	public:
		AirBlock(std::string const&,int,std::string const&,Material const&);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void canBeSilkTouched(void);
		void canHaveExtraData(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isObstructingChests(BlockSource &,BlockPos const&);
		void isWaterBlocking(void);
		void mayPick(BlockSource &,int,bool);
		void mayPick(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tryToPlace(BlockSource &,BlockPos const&,uchar);
		void ~AirBlock();
		void ~AirBlock();
};