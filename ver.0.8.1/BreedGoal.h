#pragma once
class BreedGoal{
	public:
		BreedGoal(Animal *,float);
		void breed(void);
		void canContinueToUse(void);
		void canUse(void);
		void getFreePartner(void);
		void setLevel(Level *);
		void stop(void);
		void tick(void);
		void ~BreedGoal();
		void ~BreedGoal();
};
