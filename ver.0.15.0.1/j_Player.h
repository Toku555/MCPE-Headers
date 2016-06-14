#pragma once
namespace j{
	class Player{
		public:
		void _checkMovementStatistiscs(Vec3 const&);
		void _crit(Entity &);
		void addLevels(int);
		void aiStep(void);
		void aiStep(void);
		void attack(Entity &);
		void deleteContainerManager(void);
		void destroyRegion(void);
		void die(EntityDamageSource const&);
		void getNewEnchantmentSeed(void);
		void getPlayerLevel(void);
		void handleJumpEffects(void);
		void interact(Entity &);
		void setChunkRadius(int);
		void setRespawnPosition(BlockPos const&);
		void setTeleportDestination(Vec3 const&);
		void stopUsingItem(void);
		void ~Player();
		void ~Player();
	}
};
