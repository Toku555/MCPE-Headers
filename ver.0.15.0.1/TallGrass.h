#pragma once
class TallGrass{
	public:
		TallGrass(std::string const&,int);
		TallGrass(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getColor(int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void mayConsumeFertilizer(BlockSource &);
		void mayConsumeFertilizer(BlockSource &);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onGraphicsModeChanged(bool,bool,bool);
		void onGraphicsModeChanged(bool,bool,bool);
		void playerDestroy(Player *,BlockPos const&,int);
		void playerDestroy(Player *,BlockPos const&,int);
		void randomlyModifyPosition(BlockPos const&);
		void randomlyModifyPosition(BlockPos const&);
		void ~TallGrass();
		void ~TallGrass();
};
