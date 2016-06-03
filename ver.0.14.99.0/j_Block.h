#pragma once
namespace j{
	class Block{
		public:
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getMaterial(void);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getRenderLayer(void);
		void getResource(Random &,int,int);
		void getShadeBrightness(void);
		void getTypeToSpawn(BlockSource &,EntityType,BlockPos const&);
		void getVisualShape(uchar,AABB &,bool);
		void hasProperty(BlockProperty);
		void isSolid(void);
		void isType(Block const*);
		void mayPlace(BlockSource &,BlockPos const&);
		void onGraphicsModeChanged(bool,bool,bool);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void playerDestroy(Player *,BlockPos const&,int);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void updateEntityAfterFallOn(Entity &);
		void ~Block();
	}
};
