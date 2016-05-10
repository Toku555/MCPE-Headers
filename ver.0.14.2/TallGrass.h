#pragma once
class TallGrass{
	public:
		TallGrass(std::string const&,int,std::string const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getCarriedTexture(signed char,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getResource(Random &,int,int);
		void getTessellatedUVs(void);
		void getTexture(signed char,int);
		void mayConsumeFertilizer(BlockSource &);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onGraphicsModeChanged(bool,bool,bool);
		void playerDestroy(Player *,BlockPos const&,int);
		void randomlyModifyPosition(BlockPos const&);
		void ~TallGrass();
		void ~TallGrass();
};
