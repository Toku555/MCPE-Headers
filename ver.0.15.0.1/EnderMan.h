#pragma once
class EnderMan{
	public:
		EnderMan(BlockSource &);
		EnderMan(BlockSource &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void _isLookingAtMe(Mob &);
		void _isLookingAtMe(Mob &);
		void _setCreepy(bool);
		void _teleport(Vec3 const&);
		void _teleport(Vec3 const&);
		void _teleport(void);
		void _teleportTowards(Entity *);
		void _teleportTowards(Entity *);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void aiStep(void);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getCarryingBlock(void);
		void getCarryingBlock(void);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void isCreepy(void);
		void isCreepy(void);
		void newServerAiStep(void);
		void newServerAiStep(void);
		void normalTick(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void registerAttributes(void);
		void setCarryingBlock(FullBlock);
		void ~EnderMan();
		void ~EnderMan();
};
