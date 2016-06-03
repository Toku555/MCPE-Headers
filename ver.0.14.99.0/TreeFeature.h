#pragma once
class TreeFeature{
	public:
		TreeFeature(bool,int,int,bool);
		TreeFeature(bool,int,int,bool);
		TreeFeature(bool,int,int,bool);
		void _addCocoaPlants(BlockSource &,BlockPos const&,Random &,int);
		void _addCocoaPlants(BlockSource &,BlockPos const&,Random &,int);
		void _addJungleFeatures(BlockSource &,BlockPos const&,Random &);
		void _addJungleFeatures(BlockSource &,BlockPos const&,Random &);
		void _addVine(BlockSource &,BlockPos const&,int);
		void _addVine(BlockSource &,BlockPos const&,int);
		void _getLeafType(void);
		void _getLeafType(void);
		void _getTrunkType(void);
		void _getTrunkType(void);
		void _isFree(BlockID);
		void _isFree(BlockID);
		void _isFree(Material const&);
		void _isFree(Material const&);
		void _placeFallenTrunk(BlockSource &,BlockPos const&,Random &,int);
		void _placeFallenTrunk(BlockSource &,BlockPos const&,Random &,int);
		void _placeLeaf(BlockSource &,BlockPos const&);
		void _placeLeaf(BlockSource &,BlockPos const&);
		void _placeTrunk(BlockSource &,BlockPos const&,Random &,int);
		void _placeTrunk(BlockSource &,BlockPos const&,Random &,int);
		void _prepareSpawn(BlockSource &,BlockPos const&,int);
		void _prepareSpawn(BlockSource &,BlockPos const&,int);
		void place(BlockSource &,BlockPos const&,Random &);
		void place(BlockSource &,BlockPos const&,Random &);
		void place(BlockSource &,BlockPos const&,Random &,int);
		void place(BlockSource &,BlockPos const&,Random &,int);
		void ~TreeFeature();
		void ~TreeFeature();
};
