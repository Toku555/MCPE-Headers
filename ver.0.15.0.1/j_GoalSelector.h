#pragma once
namespace j{
	class GoalSelector{
		public:
		void buildDebugInfo(std::string &);
		void removeGoal(Goal *);
		void stopGoals(void);
	}
};
