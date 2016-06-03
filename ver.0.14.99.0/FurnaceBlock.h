#pragma once
class FurnaceBlock{
	public:
		FurnaceBlock(std::string const&,int,bool);
		FurnaceBlock(std::string const&,int,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void hasComparatorSignal(void);
		void hasComparatorSignal(void);
		void isContainerBlock(void);
		void isContainerBlock(void);
		void isCraftingBlock(void);
		void isCraftingBlock(void);
		void onRemove(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void setLit(bool,BlockSource &,BlockPos const&);
		void setLit(bool,BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~FurnaceBlock();
		void ~FurnaceBlock();
};
