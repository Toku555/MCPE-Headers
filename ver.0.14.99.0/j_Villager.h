#pragma once
namespace j{
	class Villager{
		public:
		void _addParticlesAroundSelf(ParticleType);
		void _countFood(int);
		void isInLove(void);
		void loadPersonalAiGoals(void);
		void setInLove(Villager*);
	}
};
