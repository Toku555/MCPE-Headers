#pragma once
class TamableAnimal{
	public:
		TamableAnimal(BlockSource &);
		void _sendTameEvents(Player *);
		void addAdditionalSaveData(CompoundTag &);
		void getOwner(void);
		void getOwnerId(void);
		void getSitGoal(void);
		void handleEntityEvent(EntityEvent);
		void isSitting(void);
		void isTame(void);
		void readAdditionalSaveData(CompoundTag const&);
		void setOwner(EntityUniqueID);
		void setSitting(bool);
		void spawnTamingParticles(bool);
		void ~TamableAnimal();
		void ~TamableAnimal();
};
