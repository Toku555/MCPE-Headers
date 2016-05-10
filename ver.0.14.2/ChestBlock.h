#pragma once
class ChestBlock{
	public:
		ChestBlock(std::string const&,int,ChestBlock::ChestType);
		void canBeSilkTouched(void);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char);
		void hasComparatorSignal(void);
		void init(void);
		void isContainerBlock(void);
		void isRedstoneBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void updateSignalStrength(BlockSource &,BlockPos const&,int);
		void use(Player &,BlockPos const&);
		void ~ChestBlock();
		void ~ChestBlock();
};
