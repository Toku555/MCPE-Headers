#pragma once
class Mob{
	public:
		Mob(Level *);
		void _init(void);
		void actuallyHurt(int);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void animateHurt(void);
		void ate(void);
		void baseTick(void);
		void beforeRemove(void);
		void canBeControlledByRider(void);
		void canSee(Entity *);
		void canSpawn(void);
		void causeFallDamage(float);
		void checkDespawn(Mob*);
		void checkDespawn(void);
		void die(Entity *);
		void doHurtTarget(Entity *);
		void dropDeathLoot(void);
		void finalizeMobSpawn(void);
		void getAmbientSound(void);
		void getAmbientSoundInterval(void);
		void getArmorValue(void);
		void getAttackAnim(float);
		void getCarriedItem(void);
		void getDamageAfterArmorAbsorb(int);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityData(void);
		void getEntityData(void);
		void getHeadHeight(void);
		void getHurtSound(void);
		void getItemInHandIcon(ItemInstance const*,int);
		void getJumpControl(void);
		void getLastHurtByMob(void);
		void getLastHurtMob(void);
		void getLookAngle(void);
		void getLookControl(void);
		void getMaxHeadXRot(void);
		void getMaxHealth(void);
		void getMaxSpawnClusterSize(void);
		void getMoveControl(void);
		void getNavigation(void);
		void getPos(float);
		void getSensing(void);
		void getSharedFlag(int);
		void getSoundVolume(void);
		void getSpeed(void);
		void getTarget(void);
		void getTexture(void);
		void getUseItemDuration(void);
		void getViewVector(float);
		void getVoicePitch(void);
		void getWalkingSpeedModifier(void);
		void getYHeadRot(void);
		void handleEntityEvent(char);
		void heal(int);
		void hurt(Entity *,int);
		void hurtArmor(int);
		void interpolateOnly(void);
		void isAlive(void);
		void isBaby(void);
		void isImmobile(void);
		void isLookingAtAnEntity(void);
		void isMob(void);
		void isOnFire(void);
		void isPickable(void);
		void isPushable(void);
		void isShootable(void);
		void isSleeping(void);
		void isSneaking(void);
		void isWaterMob(void);
		void jumpFromGround(void);
		void knockback(Entity *,int,float,float);
		void lerpTo(float,float,float,float,float,int);
		void lookAt(Entity *,float,float);
		void newServerAiStep(void);
		void onLadder(void);
		void outOfWorld(void);
		void pick(float,float,bool);
		void playAmbientSound(void);
		void postInit(void);
		void pushEntities(void);
		void readAdditionalSaveData(CompoundTag *);
		void removeWhenFarAway(void);
		void reset(void);
		void rideTick(void);
		void serverAiMobStep(void);
		void setJumping(bool);
		void setLastHurtByMob(Mob*);
		void setLastHurtMob(Entity *);
		void setSharedFlag(int,bool);
		void setSize(float,float);
		void setSneaking(bool);
		void setSpeed(float);
		void setTarget(Mob*);
		void setYHeadRot(float);
		void setYya(float);
		void spawnAnim(void);
		void superTick(void);
		void swing(void);
		void teleportTo(float,float,float);
		void tick(void);
		void travel(float,float);
		void updateAi(void);
		void updateAttackAnim(void);
		void updateMobId(int *);
		void updateWalkAnim(void);
		void useNewAi(void);
		void ~Mob();
		void ~Mob();
};