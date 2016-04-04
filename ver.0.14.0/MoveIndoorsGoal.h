#pragma once
class MoveIndoorsGoal{
	public:
		MoveIndoorsGoal(Villager &,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void ~MoveIndoorsGoal();
		void ~MoveIndoorsGoal();
};
