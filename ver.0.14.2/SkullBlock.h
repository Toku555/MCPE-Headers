#pragma once
class SkullBlock{
	public:
		SkullBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void checkMobSpawn(Level &,BlockSource &,BlockPos const&,SkullBlockEntity &);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getTypeDescriptionId(int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void mayPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~SkullBlock();
		void ~SkullBlock();
};
