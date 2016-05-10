#pragma once
class FurnaceBlock{
	public:
		FurnaceBlock(std::string const&,int,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char);
		void hasComparatorSignal(void);
		void isContainerBlock(void);
		void isCraftingBlock(void);
		void onRemove(BlockSource &,BlockPos const&);
		void setLit(bool,BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~FurnaceBlock();
		void ~FurnaceBlock();
};
