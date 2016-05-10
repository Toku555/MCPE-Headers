#pragma once
class ServerPlayer{
	public:
		void function<void ();
		void _nextContainerCounter(void);
		void _setContainerManager(IContainerManager *);
		void aiStep(void);
		void calculateNewChunkRadius(void);
		void changeDimension(DimensionId);
		void disconnect(void);
		void displayLocalizableMessage(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void doDeleteContainerManager(void);
		void getRequestedChunkRadius(void);
		void hasResource(int);
		void hurtArmor(int);
		void knockback(Entity *,int,float,float);
		void onEffectAdded(MobEffectInstance &);
		void onEffectRemoved(MobEffectInstance &);
		void onEffectUpdated(MobEffectInstance const&);
		void openPortfolio(void);
		void push(Vec3 const&);
		void sendMobEffectPackets(void);
		void setContainerData(IContainerManager &,int,int);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setPermissions(UserPermissionsLevel);
		void setPlayerGameType(GameType);
		void setPlayerInput(float,float,bool,bool);
		void setRequestedChunkRadius(int);
		void slotChanged(IContainerManager &,int,ItemInstance const&,bool);
		void stopSleepInBed(bool,bool);
		void tickWorld(Tick const&);
		void ~ServerPlayer();
		void ~ServerPlayer();
};
