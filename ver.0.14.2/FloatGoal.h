#pragma once
class FloatGoal{
	public:
		FloatGoal(Mob &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void tick(void);
		void ~FloatGoal();
		void ~FloatGoal();
};
