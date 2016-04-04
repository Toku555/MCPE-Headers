#pragma once
class OcelotAttackGoal{
	public:
		OcelotAttackGoal(Mob &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void stop(void);
		void tick(void);
		void ~OcelotAttackGoal();
		void ~OcelotAttackGoal();
};
