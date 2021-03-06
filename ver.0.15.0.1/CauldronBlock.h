#pragma once
class CauldronBlock{
	public:
		CauldronBlock(std::string const&,int);
		CauldronBlock(std::string const&,int);
		void _decrementStack(Player &,ItemInstance *);
		void _decrementStack(Player &,ItemInstance *);
		void _explodeCauldronContents(BlockSource &,BlockPos const&,uchar);
		void _setSelectedItemOrAdd(Player &,ItemInstance &);
		void _setSelectedItemOrAdd(Player &,ItemInstance &);
		void _spawnCauldronEvent(BlockSource &,BlockPos const&,LevelEvent);
		void _spawnCauldronEvent(BlockSource &,BlockPos const&,LevelEvent);
		void _useInventory(Player &,ItemInstance *,ItemInstance&,int);
		void _useInventory(Player &,ItemInstance *,ItemInstance&,int);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getExtraRenderLayers(void);
		void getExtraRenderLayers(void);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void handleRain(BlockSource &,BlockPos const&,float);
		void handleRain(BlockSource &,BlockPos const&,float);
		void hasComparatorSignal(void);
		void hasComparatorSignal(void);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void setWaterLevel(BlockSource &,BlockPos const&,uchar,int);
		void spawnBubbleParticles(Level &,Vec3 const&,Random &,int,int);
		void spawnBubbleParticles(Level &,Vec3 const&,Random &,int,int);
		void spawnPotionParticles(Level &,Vec3 const&,Random &,int,int);
		void spawnPotionParticles(Level &,Vec3 const&,Random &,int,int);
		void spawnSplashParticles(Level &,Vec3 const&,Random &,int,int);
		void spawnSplashParticles(Level &,Vec3 const&,Random &,int,int);
		void updateShape(BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~CauldronBlock();
		void ~CauldronBlock();
};
