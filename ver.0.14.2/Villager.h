#pragma once
class Villager{
	public:
		Villager(BlockSource &,Profession);
		void _addItemForPurchase(MerchantRecipeList *,Item *,Random *,float);
		void _addItemForTradeIn(MerchantRecipeList *,Item *,Random *,float);
		void _addOffers(int);
		void _addParticlesAroundSelf(ParticleType);
		void _countFood(int);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getItemTradeInValue(Item *,Random *);
		void _getPurchaseCost(Item *,Random *);
		void _getRecipeChance(float);
		void _getTradeInValue(Item *,Random *);
		void _grewUp(void);
		void _initStaticValuePrices(void);
		void _pickUpItem(ItemEntity &);
		void _serverAiMobStep(void);
		void _wantsItem(Item *);
		void addAdditionalSaveData(CompoundTag &);
		void canBeLeashed(void);
		void canInteractWith(Player &);
		void create(BlockSource &,Vec3 const&,Profession);
		void createBreedOffspring(AgableMob *);
		void die(EntityDamageSource const&);
		void finalizeMobSpawn(void);
		void getEntityTypeId(void);
		void getEyeHeight(void);
		void getOffers(Player *);
		void getProfession(void);
		void getTradingPlayer(void);
		void getVillage(void);
		void handleEntityEvent(EntityEvent);
		void hasEnoughFoodToBreed(void);
		void hasExcessFood(void);
		void init(Profession);
		void interactWithPlayer(Player &);
		void isChasing(void);
		void isInLove(void);
		void isTrading(void);
		void isWillingToBreed(bool);
		void loadPersonalAiGoals(void);
		void lovePartnerId(void);
		void newServerAiStep(void);
		void notifyTrade(MerchantRecipe *);
		void notifyTradeUpdated(ItemInstance *);
		void onLightningHit(void);
		void onSynchedDataUpdate(int);
		void overrideOffers(MerchantRecipeList *);
		void postProcessOffspring(Villager&,Villager&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void remove(void);
		void setChasing(bool);
		void setInLove(Villager*);
		void setLastHurtByMob(Mob *);
		void setProfession(Profession);
		void setRewardPlayersInVillage(void);
		void setSlot(int,ItemInstance *);
		void setTradingPlayer(Player *);
		void setWillingToBreed(bool);
		void stopGoals(void);
		void useNewAi(void);
		void wantsMoreFood(void);
		void ~Villager();
		void ~Villager();
};