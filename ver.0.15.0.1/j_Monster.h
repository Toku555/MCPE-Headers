#pragma once
namespace j{
	class Monster{
		public:
		void aiStep(void);
		void doHurtTarget(Entity *);
		void normalTick(void);
	}
};
