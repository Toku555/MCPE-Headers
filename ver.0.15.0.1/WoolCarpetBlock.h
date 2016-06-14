#pragma once
class WoolCarpetBlock{
	public:
		WoolCarpetBlock(std::string const&,int);
		WoolCarpetBlock(std::string const&,int);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getBlockDataForItemAuxValue(int);
		void getBlockDataForItemAuxValue(int);
		void getMapColor(FullBlock const&);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~WoolCarpetBlock();
		void ~WoolCarpetBlock();
};
