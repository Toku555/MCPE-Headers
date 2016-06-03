#pragma once
class TamableAnimal{
	public:
		TamableAnimal(BlockSource &);
		TamableAnimal(BlockSource &);
		void _sendTameEvents(Player *);
		void _sendTameEvents(Player *);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void getOwner(void);
		void getOwner(void);
		void getOwnerId(void);
		void getOwnerId(void);
		void getSitGoal(void);
		void getSitGoal(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void isOwner(Player const&);
		void isOwner(Player const&);
		void isSitting(void);
		void isSitting(void);
		void isTame(void);
		void isTame(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setOwner(EntityUniqueID);
		void setOwner(EntityUniqueID);
		void setSitting(bool);
		void setSitting(bool);
		void spawnTamingParticles(bool);
		void spawnTamingParticles(bool);
		void ~TamableAnimal();
		void ~TamableAnimal();
};
