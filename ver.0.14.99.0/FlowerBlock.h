#pragma once
class FlowerBlock{
	public:
		FlowerBlock(std::string const&,int,FlowerBlock::Type);
		FlowerBlock(std::string const&,int,FlowerBlock::Type);
		void _randomWalk(BlockSource &,int &,int &,int &,int);
		void _randomWalk(BlockSource &,int &,int &,int &,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void randomlyModifyPosition(BlockPos const&);
		void randomlyModifyPosition(BlockPos const&);
		void ~FlowerBlock();
		void ~FlowerBlock();
};
