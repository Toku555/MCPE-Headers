#pragma once
class RaidGardenGoal{
	public:
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void isValidTarget(BlockSource &,BlockPos const&);
		void tick(void);
		void ~RaidGardenGoal();
		void ~RaidGardenGoal();
};
