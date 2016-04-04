#pragma once
class LeafBlock{
	public:
		LeafBlock(std::string const&,int,std::string const&);
		void die(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getRenderLayer(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSeasonsColor(BlockSource &,BlockPos const&,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void isDeepLeafBlock(BlockSource &,BlockPos const&);
		void isSeasonTinted(BlockSource &,BlockPos const&);
		void onGraphicsModeChanged(bool,bool);
		void onRemove(BlockSource &,BlockPos const&);
		void playerDestroy(Player *,BlockPos const&,int);
		void runDecay(BlockSource &,BlockPos const&,int);
		void setFancy(bool);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~LeafBlock();
		void ~LeafBlock();
};
