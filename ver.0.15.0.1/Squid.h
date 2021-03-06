#pragma once
class Squid{
	public:
		Squid(BlockSource &);
		Squid(BlockSource &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void _getSoundVolume(void);
		void _getSoundVolume(void);
		void _randomInkDir(void);
		void _randomInkDir(void);
		void aiStep(void);
		void aiStep(void);
		void canSpawn(bool);
		void canSpawn(bool);
		void checkForSteeringCollision(Vec3 const&,float,Vec3&);
		void checkForSteeringCollision(Vec3 const&,float,Vec3&);
		void chooseRandomDirection(Vec3 &);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getExperienceReward(void);
		void getJumpPower(void);
		void getJumpPower(void);
		void getOldTentacleAngle(void);
		void getOldTentacleAngle(void);
		void getTentacleAngle(void);
		void getTentacleAngle(void);
		void getTy(void);
		void getWaterHeights(short &,float &,float &);
		void getWaterHeights(short &,float &,float &);
		void getXBodyRot(void);
		void getXBodyRot(void);
		void getXBodyRotO(void);
		void getXBodyRotO(void);
		void getZBodyRot(void);
		void getZBodyRot(void);
		void getZBodyRotO(void);
		void getZBodyRotO(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void isLeashableType(void);
		void isLeashableType(void);
		void normalTick(void);
		void normalTick(void);
		void registerAttributes(void);
		void registerAttributes(void);
		void setTx(float);
		void setTy(float);
		void setTz(float);
		void setXBodyRot(float &);
		void setXBodyRotO(float &);
		void setZBodyRot(float &);
		void setZBodyRotO(float &);
		void spawnInkParticles(void);
		void spawnInkParticles(void);
		void travel(float,float);
		void travel(float,float);
		void ~Squid();
		void ~Squid();
};
