#pragma once
class CocoaBlock{
	public:
		CocoaBlock(std::string const&,int);
		CocoaBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void getAge(int);
		void getAge(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~CocoaBlock();
		void ~CocoaBlock();
};
