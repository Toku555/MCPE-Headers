#pragma once
class MushroomBlock{
	public:
		MushroomBlock(std::string const&,int,std::string const&);
		void _growTree(BlockSource &,BlockPos const&,Random &);
		void canSurvive(BlockSource &,BlockPos const&);
		void getTessellatedUVs(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlaceOn(Block const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~MushroomBlock();
		void ~MushroomBlock();
};
