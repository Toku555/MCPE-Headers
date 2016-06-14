#pragma once
class RotatedPillarBlock{
	public:
		RotatedPillarBlock(std::string const&,int,Material const&);
		RotatedPillarBlock(std::string const&,int,Material const&);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getType(int);
		void getType(int);
		void getVariant(int);
		void getVariant(int);
		void ~RotatedPillarBlock();
		void ~RotatedPillarBlock();
};
