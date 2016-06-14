#pragma once
namespace j{
	class Mob{
		public:
		void _doSprintParticleEffect(void);
		void _removeSpeedBonus(mce::UUID const&);
		void actuallyHurt(int,EntityDamageSource const*);
		void aiStep(void);
		void applyFinalFriction(float);
		void die(EntityDamageSource const&);
		void feedMob(int);
		void finalizeMobSpawn(void);
		void handleEntityEvent(EntityEvent,int);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void jumpFromGround(void);
		void newServerAiStep(void);
		void normalTick(void);
		void removeEffect(int);
		void resolveDeathLoot(int);
		void setJumpVelRedux(bool);
		void setSurfaceMob(bool);
		void setYya(float);
		void updateAttackAnim(void);
		void ~Mob();
	}
};
