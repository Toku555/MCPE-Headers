#pragma once
class CocoaBlock{
	public:
		CocoaBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void getAge(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getTessellatedUVs(void);
		void getTexture(signed char);
		void getTextureForAge(int);
		void getVisualShape(uchar,AABB &,bool);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~CocoaBlock();
		void ~CocoaBlock();
};
