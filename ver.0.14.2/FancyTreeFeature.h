#pragma once
class FancyTreeFeature{
	public:
		FancyTreeFeature(void);
		void FoliageCoords(BlockPos,int);
		void getBranchBase(void);
		void _checkLine(BlockSource &,BlockPos const&,BlockPos const&);
		void _checkLocation(BlockSource &,BlockPos const&,int &);
		void _crossection(BlockSource &,BlockPos const&,float,BlockID);
		void _foliageCluster(BlockSource &,FancyTreeFeature::FoliageCoords const&);
		void _getFoliageShape(int);
		void _getLogFacingData(BlockPos const&,BlockPos const&);
		void _getSteps(BlockPos const&);
		void _getTreeShape(int,int);
		void _limb(BlockSource &,BlockPos const&,BlockPos const&,BlockID);
		void _makeBranches(BlockSource &,std::vector<FancyTreeFeature::FoliageCoords,std::allocator<FancyTreeFeature::FoliageCoords>> const&,BlockPos const&,int);
		void _makeFoliage(BlockSource &,std::vector<FancyTreeFeature::FoliageCoords,std::allocator<FancyTreeFeature::FoliageCoords>> const&);
		void _makeTrunk(BlockSource &,BlockPos const&,int);
		void _trimBranches(int,int);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~FancyTreeFeature();
		void ~FancyTreeFeature();
};
