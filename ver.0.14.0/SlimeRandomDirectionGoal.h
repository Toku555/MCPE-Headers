#pragma once
class SlimeRandomDirectionGoal{
	public:
		SlimeRandomDirectionGoal(Slime &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void tick(void);
		void ~SlimeRandomDirectionGoal();
		void ~SlimeRandomDirectionGoal();
};
