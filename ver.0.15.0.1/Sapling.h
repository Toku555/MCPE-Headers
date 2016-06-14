#pragma once
class Sapling{
	public:
		void AdvanceTree(BlockSource &,BlockPos const&,Random &);
		Sapling(std::string const&,int);
		Sapling(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void generateJungleTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateJungleTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRedwoodTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRedwoodTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRoofTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void generateRoofTree(int &,int &,bool &,BlockPos const&,BlockSource &);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void growTree(BlockSource &,BlockPos const&,Random &);
		void growTree(BlockSource &,BlockPos const&,Random &);
		void isSapling(BlockSource &,BlockPos const&,int);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~Sapling();
		void ~Sapling();
};
