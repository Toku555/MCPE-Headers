#pragma once
class CakeBlock{
	public:
		CakeBlock(std::string const&,int);
		CakeBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void hasComparatorSignal(void);
		void hasComparatorSignal(void);
		void isRedstoneAttachable(void);
		void isRedstoneAttachable(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~CakeBlock();
		void ~CakeBlock();
};
