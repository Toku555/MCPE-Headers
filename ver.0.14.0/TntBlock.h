#pragma once
class TntBlock{
	public:
		TntBlock(std::string const&,int,std::string const&);
		void destroy(BlockSource &,BlockPos const&,int,Entity *);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char);
		void onExploded(BlockSource &,BlockPos const&,Entity *);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void use(Player &,BlockPos const&);
		void ~TntBlock();
		void ~TntBlock();
};
