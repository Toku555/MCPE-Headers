#pragma once
class StairBlock{
	public:
		StairBlock(std::string const&,int,Block &,int);
		StairBlock(std::string const&,int,Block &,int);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void attack(Player *,BlockPos const&);
		void attack(Player *,BlockPos const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getExplosionResistance(Entity *);
		void getExplosionResistance(Entity *);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVariant(int);
		void getVariant(int);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void isLockAttached(BlockSource &,BlockPos const&,int);
		void isStairBlock(void);
		void isStairBlock(void);
		void isStairs(int);
		void mayPick(BlockSource &,int,bool);
		void mayPick(BlockSource &,int,bool);
		void mayPick(void);
		void mayPick(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void prepareRender(BlockSource &,BlockPos const&);
		void prepareRender(BlockSource &,BlockPos const&);
		void setBaseShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setBaseShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setInnerPieceShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setInnerPieceShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setStepShape(BlockSource &,BlockPos const&,AABB &,bool);
		void setStepShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shapeZFightShrink(AABB &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~StairBlock();
		void ~StairBlock();
};