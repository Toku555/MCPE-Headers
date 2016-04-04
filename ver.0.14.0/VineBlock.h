#pragma once
class VineBlock{
	public:
		VineBlock(std::string const&,int);
		void _getFacingData(int);
		void _isAcceptableNeighbor(Block &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getCarriedTexture(signed char,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void playerDestroy(Player *,BlockPos const&,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void updateSurvival(BlockSource &,BlockPos const&);
		void ~VineBlock();
		void ~VineBlock();
};
