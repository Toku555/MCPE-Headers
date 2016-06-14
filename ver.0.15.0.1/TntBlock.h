#pragma once
class TntBlock{
	public:
		TntBlock(std::string const&,int);
		TntBlock(std::string const&,int);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~TntBlock();
		void ~TntBlock();
};
