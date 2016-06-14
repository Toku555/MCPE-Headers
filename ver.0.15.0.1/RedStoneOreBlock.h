#pragma once
class RedStoneOreBlock{
	public:
		RedStoneOreBlock(std::string const&,int,bool);
		RedStoneOreBlock(std::string const&,int,bool);
		void _interact(BlockSource &,BlockPos const&);
		void _poofParticles(BlockSource &,BlockPos const&);
		void _poofParticles(BlockSource &,BlockPos const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void attack(Player *,BlockPos const&);
		void attack(Player *,BlockPos const&);
		void getExperienceDrop(Random &);
		void getExperienceDrop(Random &);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void getTickDelay(void);
		void onStepOn(Entity &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~RedStoneOreBlock();
		void ~RedStoneOreBlock();
};
