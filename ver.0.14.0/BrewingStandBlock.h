#pragma once
class BrewingStandBlock{
	public:
		BrewingStandBlock(std::string const&,int);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void getBaseTexture(void);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getResource(Random &,int,int);
		void hasComparatorSignal(void);
		void isContainerBlock(void);
		void isCraftingBlock(void);
		void onRemove(BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~BrewingStandBlock();
		void ~BrewingStandBlock();
};
