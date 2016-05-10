#pragma once
class FireBlock{
	public:
		FireBlock(std::string const&,int,std::string const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void canBeSilkTouched(void);
		void canBurn(BlockSource &,BlockPos const&);
		void checkBurn(BlockSource &,BlockPos const&,int,Random &,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getFireOdds(BlockSource &,BlockPos const&);
		void getFlammability(BlockSource &,BlockPos const&,int);
		void getResourceCount(Random &,int,int);
		void getTickDelay(void);
		void ignite(BlockSource &,BlockPos const&);
		void isValidFireLocation(BlockSource &,BlockPos const&);
		void mayPick(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void setFlammable(BlockID,int,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tryIgnite(BlockSource &,BlockPos const&);
		void ~FireBlock();
		void ~FireBlock();
};
