#pragma once
namespace GoalSelector{
	class InternalGoal{
		public:
		void InternalGoal(GoalSelector::InternalGoal&&);
		void InternalGoal(int,std::unique_ptr<Goal,std::default_delete<Goal>>);
		void getPriority(void);
		void getToStart(void);
		void getUsed(void);
		void operator=(GoalSelector::InternalGoal&&);
		void setPriority(int);
		void setToStart(bool);
		void setUsed(bool);
		void ~InternalGoal();
		void ~InternalGoal();
		void _canCoExist(GoalSelector::InternalGoal &,GoalSelector::InternalGoal &);
		void _canUseInSystem(GoalSelector::InternalGoal &);
		void addGoal(int,std::unique_ptr<Goal,std::default_delete<Goal>>);
		void addGoal(int,std::unique_ptr<Goal,std::default_delete<Goal>>);
		void buildDebugInfo(std::string &);
		void buildDebugInfo(std::string &);
		void removeGoal(Goal *);
		void removeGoal(Goal *);
		void stopGoals(void);
		void stopGoals(void);
		void tick(void);
		void tick(void);
	}
};
