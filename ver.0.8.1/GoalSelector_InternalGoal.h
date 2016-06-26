#pragma once
namespace GoalSelector{
	class InternalGoal{
		public:
		void InternalGoal(int,Goal *,bool);
		void addGoal(int,Goal *,bool);
		void canCoExist(GoalSelector::InternalGoal *,GoalSelector::InternalGoal *);
		void canUseInSystem(GoalSelector::InternalGoal *);
		void getRunningGoals(void);
		void tick(void);
		void ~GoalSelector();
	}
};
