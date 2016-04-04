#pragma once
class RotatedPillarBlock{
	public:
		RotatedPillarBlock(std::string const&,int,Material const&);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getDirTexture(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getTexture(signed char,int);
		void getType(int);
		void ~RotatedPillarBlock();
		void ~RotatedPillarBlock();
};
