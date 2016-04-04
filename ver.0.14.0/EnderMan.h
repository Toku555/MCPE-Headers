#pragma once
class EnderMan{
	public:
		EnderMan(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _isLookingAtMe(Mob &);
		void _setCreepy(bool);
		void _teleport(Vec3 const&);
		void _teleport(void);
		void _teleportTowards(Entity *);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void dropDeathLoot(int);
		void getCarryingBlock(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void hurt(EntityDamageSource const&,int);
		void isCreepy(void);
		void newServerAiStep(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setCarryingBlock(FullBlock);
		void ~EnderMan();
		void ~EnderMan();
};
