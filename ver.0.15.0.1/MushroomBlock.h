#pragma once
class MushroomBlock{
	public:
		MushroomBlock(std::string const&,int);
		MushroomBlock(std::string const&,int);
		void _growTree(BlockSource &,BlockPos const&,Random &);
		void _growTree(BlockSource &,BlockPos const&,Random &);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlaceOn(Block const&);
		void mayPlaceOn(Block const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~MushroomBlock();
		void ~MushroomBlock();
};
