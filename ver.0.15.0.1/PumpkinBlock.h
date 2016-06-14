#pragma once
class PumpkinBlock{
	public:
		PumpkinBlock(std::string const&,int,bool);
		PumpkinBlock(std::string const&,int,bool);
		void _canSpawnGolem(BlockSource &,BlockPos const&);
		void _canSpawnGolem(BlockSource &,BlockPos const&);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getVariant(int);
		void getVariant(int);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void ~PumpkinBlock();
		void ~PumpkinBlock();
};
