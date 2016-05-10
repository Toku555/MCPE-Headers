#pragma once
class StairBlock{
	public:
		StairBlock(std::string const&,int,Block &,int);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void attack(Player *,BlockPos const&);
		void canBeSilkTouched(void);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getExplosionResistance(Entity *);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getResourceCount(Random &,int,int);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char);
		void getTexture(signed char,int);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void isLockAttached(BlockSource &,BlockPos const&,int);
		void isStairs(int);
		void mayPick(BlockSource &,int,bool);
		void mayPick(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void prepareRender(BlockSource &,BlockPos const&);
		void setBaseShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setInnerPieceShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setStepShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shapeZFightShrink(AABB &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void ~StairBlock();
		void ~StairBlock();
};
