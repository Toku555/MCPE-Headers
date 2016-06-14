#pragma once
class FenceBlock{
	public:
		FenceBlock(std::string const&,int,Material const&);
		FenceBlock(std::string const&,int,Material const&);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void connectsTo(BlockSource &,BlockPos const&,BlockPos const&);
		void connectsTo(BlockSource &,BlockPos const&,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void isFenceBlock(void);
		void isFenceBlock(void);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~FenceBlock();
		void ~FenceBlock();
};
