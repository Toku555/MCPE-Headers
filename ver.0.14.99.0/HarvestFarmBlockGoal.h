#pragma once
class HarvestFarmBlockGoal{
	public:
		HarvestFarmBlockGoal(Villager *,float);
		HarvestFarmBlockGoal(Villager *,float);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canContinueToUse(void);
		void canUse(void);
		void canUse(void);
		void findInventorySlotForFarmSeeds(void);
		void isValidTarget(BlockSource &,BlockPos const&);
		void isValidTarget(BlockSource &,BlockPos const&);
		void start(void);
		void start(void);
		void stop(void);
		void stop(void);
		void tick(void);
		void tick(void);
		void ~HarvestFarmBlockGoal();
		void ~HarvestFarmBlockGoal();
};
