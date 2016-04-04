#pragma once
class RedStoneOreBlock{
	public:
		RedStoneOreBlock(std::string const&,int,std::string const&,bool);
		void _interact(BlockSource &,BlockPos const&);
		void _poofParticles(BlockSource &,BlockPos const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void attack(Player *,BlockPos const&);
		void getExperienceDrop(Random &);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getTickDelay(void);
		void onStepOn(Entity &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void ~RedStoneOreBlock();
		void ~RedStoneOreBlock();
};
