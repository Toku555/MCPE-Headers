#pragma once
class FlowerPotBlock{
	public:
		FlowerPotBlock(std::string const&,int);
		FlowerPotBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void getFlowerPotEntity(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void isSupportedBlock(Block *,short);
		void isSupportedBlock(Block *,short);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~FlowerPotBlock();
		void ~FlowerPotBlock();
};
