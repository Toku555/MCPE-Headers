#pragma once
class Sapling{
	public:
		void AdvanceTree(BlockSource &,BlockPos const&,Random &);
		Sapling(std::string const&,int,std::string const&);
		void buildDescriptionName(ItemInstance const&);
		void generateJungleTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRedwoodTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRoofTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void getSpawnResourcesAuxValue(uchar);
		void getTessellatedUVs(void);
		void getTexture(signed char,int);
		void growTree(BlockSource &,BlockPos const&,Random &);
		void isSapling(BlockSource &,BlockPos const&,int);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~Sapling();
		void ~Sapling();
};
