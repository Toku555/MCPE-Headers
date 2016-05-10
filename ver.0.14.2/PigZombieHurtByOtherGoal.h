#pragma once
class PigZombieHurtByOtherGoal{
	public:
		PigZombieHurtByOtherGoal(PigZombie &);
		void _canAttack(PathfinderMob *,Mob *,bool,bool);
		void alertOther(PathfinderMob *,Mob *);
		void ~PigZombieHurtByOtherGoal();
		void ~PigZombieHurtByOtherGoal();
};
