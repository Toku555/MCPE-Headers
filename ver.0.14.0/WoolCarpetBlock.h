#pragma once
class WoolCarpetBlock{
	public:
		WoolCarpetBlock(std::string const&,int);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getBlockDataForItemAuxValue(int);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getVisualShape(uchar,AABB &,bool);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~WoolCarpetBlock();
		void ~WoolCarpetBlock();
};
