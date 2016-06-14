#pragma once
class ObserverBlock{
	public:
		ObserverBlock(std::string const&,int);
		ObserverBlock(std::string const&,int);
		void _setVisualShape(uchar);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getVariant(int);
		void getVariant(int);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void ~ObserverBlock();
		void ~ObserverBlock();
		void ~ObserverBlock();
		void ~ObserverBlock();
};
