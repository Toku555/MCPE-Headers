#pragma once
class OcelotSitOnBlockGoal{
	public:
		OcelotSitOnBlockGoal(Mob *,float);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void isValidTarget(BlockSource &,BlockPos const&);
		void start(void);
		void stop(void);
		void tick(void);
		void ~OcelotSitOnBlockGoal();
		void ~OcelotSitOnBlockGoal();
};
