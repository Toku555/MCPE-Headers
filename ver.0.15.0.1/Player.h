#pragma once
class Player{
	public:
		void IsCreative(void);
		void IsCreative(void);
		void IsSurvival(void);
		void IsSurvival(void);
		void IsViewer(void);
		Player(Level &,PacketSender &,GameType,RakNet::RakNetGUID const&,std::unique_ptr<SkinInfoData,std::default_delete<SkinInfoData>>,mce::UUID);
		Player(Level &,PacketSender &,GameType,RakNet::RakNetGUID const&,std::unique_ptr<SkinInfoData,std::default_delete<SkinInfoData>>,mce::UUID);
		void _checkMovementStatistiscs(Vec3 const&);
		void _checkMovementStatistiscs(Vec3 const&);
		void _crit(Entity &);
		void _crit(Entity &);
		void _init(void);
		void _init(void);
		void _touch(Entity &);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void addExperience(int);
		void addExperience(int);
		void addLevels(int);
		void addLevels(int);
		void aiStep(void);
		void aiStep(void);
		void attack(Entity &);
		void attack(Entity &);
		void awardKillScore(Entity &,int);
		void awardKillScore(Entity &,int);
		void canDestroy(Block &);
		void canDestroy(Block &);
		void canOpenContainerScreen(void);
		void canOpenContainerScreen(void);
		void canStartSleepInBed(void);
		void canStartSleepInBed(void);
		void canUseCarriedItemWhileMoving(void);
		void canUseCarriedItemWhileMoving(void);
		void causeFoodExhaustion(float);
		void causeFoodExhaustion(float);
		void checkBed(bool);
		void checkBed(bool);
		void completeUsingItem(void);
		void completeUsingItem(void);
		void deleteContainerManager(void);
		void deleteContainerManager(void);
		void destroyRegion(void);
		void destroyRegion(void);
		void die(EntityDamageSource const&);
		void die(EntityDamageSource const&);
		void displayChatMessage(std::string const&,std::string const&);
		void displayChatMessage(std::string const&,std::string const&);
		void displayClientMessage(std::string const&);
		void displayClientMessage(std::string const&);
		void displayLocalizableMessage(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void displayLocalizableMessage(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void drop(ItemInstance const*);
		void drop(ItemInstance const*);
		void drop(ItemInstance const*,bool);
		void drop(ItemInstance const*,bool);
		void dropAllGear(int);
		void dropAllGear(int);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void dropRareDeathLoot(void);
		void dropRareDeathLoot(void);
		void eat(ItemInstance const&);
		void eat(ItemInstance const&);
		void eat(int,float);
		void eat(int,float);
		void filterValidUserName(std::string const&);
		void filterValidUserName(std::string const&);
		void fixSpawnPosition(BlockPos &,std::vector<BlockSource *,std::allocator<BlockSource *>>);
		void fixSpawnPosition(BlockPos &,std::vector<BlockSource *,std::allocator<BlockSource *>>);
		void getAddPacket(void);
		void getAddPacket(void);
		void getCarriedItem(void);
		void getCarriedItem(void);
		void getChunkRadius(void);
		void getChunkRadius(void);
		void getClientId(void);
		void getClientId(void);
		void getContainerManager(void);
		void getContainerManager(void);
		void getDestroySpeed(Block &);
		void getDestroySpeed(Block &);
		void getDimension(void);
		void getDimension(void);
		void getEnchantmentSeed(void);
		void getEnchantmentSeed(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getExperienceReward(void);
		void getGlobalPermissions(void);
		void getGlobalPermissions(void);
		void getHeadHeight(void);
		void getHeadHeight(void);
		void getItemInUse(void);
		void getItemInUse(void);
		void getItemUseDuration(void);
		void getItemUseDuration(void);
		void getLevelProgress(void);
		void getLevelProgress(void);
		void getNewEnchantmentSeed(void);
		void getNewEnchantmentSeed(void);
		void getPermissions(void);
		void getPermissions(void);
		void getPlayerLevel(void);
		void getPlayerLevel(void);
		void getPortalCooldown(void);
		void getPortalCooldown(void);
		void getPortalWaitTime(void);
		void getPortalWaitTime(void);
		void getRidingHeight(void);
		void getRidingHeight(void);
		void getScore(void);
		void getSelectedItem(void);
		void getSelectedItem(void);
		void getSkin(void);
		void getSkin(void);
		void getSleepRotation(void);
		void getSleepRotation(void);
		void getSleepTimer(void);
		void getSleepTimer(void);
		void getSpawnPosition(void);
		void getSpawnPosition(void);
		void getSpeed(void);
		void getSpeed(void);
		void getStandingPositionOnBlock(BlockPos const&);
		void getTelemetry(void);
		void getTelemetry(void);
		void getTicksUsingItem(void);
		void getTicksUsingItem(void);
		void getXpNeededForNextLevel(void);
		void getXpTakeDelay(void);
		void getXpTakeDelay(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void handleJumpEffects(void);
		void handleJumpEffects(void);
		void handleMovePlayerPacket(Player::PositionMode,Vec3 const&,Vec2 const&,float);
		void handleMovePlayerPacket(Player::PositionMode,Vec3 const&,Vec2 const&,float);
		void hasOpenContainer(void);
		void hasResource(int);
		void hasResource(int);
		void hasRespawnPosition(void);
		void hasRespawnPosition(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void interact(Entity &);
		void interact(Entity &);
		void isBouncing(void);
		void isBouncing(void);
		void isCreativeModeAllowed(void);
		void isCreativeModeAllowed(void);
		void isEntityRelevant(Entity const&);
		void isEntityRelevant(Entity const&);
		void isHiddenFrom(Mob &);
		void isHiddenFrom(Mob &);
		void isHungry(void);
		void isHungry(void);
		void isHurt(void);
		void isHurt(void);
		void isImmobile(void);
		void isImmobile(void);
		void isInCreativeMode(void);
		void isInCreativeMode(void);
		void isInTrialMode(void);
		void isInTrialMode(void);
		void isLocalPlayer(void);
		void isLocalPlayer(void);
		void isPositionRelevant(DimensionId,BlockPos const&);
		void isPositionRelevant(DimensionId,BlockPos const&);
		void isPushable(void);
		void isPushable(void);
		void isPushableByPiston(void);
		void isPushableByPiston(void);
		void isShootable(void);
		void isShootable(void);
		void isSleeping(void);
		void isSleeping(void);
		void isSleepingLongEnough(void);
		void isSleepingLongEnough(void);
		void isUsingItem(void);
		void isUsingItem(void);
		void isValidUserName(std::string const&);
		void isValidUserName(std::string const&);
		void jumpFromGround(void);
		void jumpFromGround(void);
		void lavaHurt(void);
		void lavaHurt(void);
		void moveView(void);
		void moveView(void);
		void normalTick(void);
		void normalTick(void);
		void onBounceStarted(BlockPos const&,FullBlock const&);
		void onBounceStarted(BlockPos const&,FullBlock const&);
		void onDimensionChanged(void);
		void onDimensionChanged(void);
		void onMovePlayerPacketNormal(Vec3 const&,Vec2 const&);
		void onMovePlayerPacketNormal(Vec3 const&,Vec2 const&);
		void onPrepChangeDimension(void);
		void onPrepChangeDimension(void);
		void openAnvil(BlockPos const&);
		void openAnvil(BlockPos const&);
		void openBrewingStand(int,BlockPos const&);
		void openBrewingStand(int,BlockPos const&);
		void openContainer(int,BlockPos const&);
		void openContainer(int,BlockPos const&);
		void openContainer(int,EntityUniqueID const&);
		void openContainer(int,EntityUniqueID const&);
		void openDispenser(int,BlockPos const&,bool);
		void openDispenser(int,BlockPos const&,bool);
		void openEnchanter(int,BlockPos const&);
		void openEnchanter(int,BlockPos const&);
		void openFurnace(int,BlockPos const&);
		void openFurnace(int,BlockPos const&);
		void openHopper(int,BlockPos const&);
		void openHopper(int,BlockPos const&);
		void openHopper(int,EntityUniqueID const&);
		void openHopper(int,EntityUniqueID const&);
		void openHorseInventory(int,EntityUniqueID const&);
		void openHorseInventory(int,EntityUniqueID const&);
		void openPortfolio(void);
		void openPortfolio(void);
		void openTextEdit(BlockEntity *);
		void openTextEdit(BlockEntity *);
		void prepareRegion(ChunkSource &);
		void prepareRegion(ChunkSource &);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void reallyDrop(std::unique_ptr<ItemEntity,std::default_delete<ItemEntity>>);
		void recheckSpawnPosition(void);
		void recheckSpawnPosition(void);
		void registerAttributes(void);
		void registerAttributes(void);
		void releaseUsingItem(void);
		void releaseUsingItem(void);
		void remove(void);
		void remove(void);
		void resetPlayerLevel(void);
		void resetPos(bool);
		void resetPos(bool);
		void respawn(void);
		void respawn(void);
		void rideTick(void);
		void rideTick(void);
		void sendInventory(void);
		void sendInventory(void);
		void sendMotionPacketIfNeeded(void);
		void sendMotionPacketIfNeeded(void);
		void sendTelemetryPacket(TelemetryEventPacket const&);
		void sendTelemetryPacket(TelemetryEventPacket const&);
		void setAllPlayersSleeping(void);
		void setAllPlayersSleeping(void);
		void setBedOffset(int);
		void setChunkRadius(int);
		void setChunkRadius(int);
		void setContainerManager(IContainerManager *);
		void setContainerManager(IContainerManager *);
		void setDefaultHeadHeight(void);
		void setEquippedSlot(ArmorSlot,ItemInstance const&);
		void setEquippedSlot(ArmorSlot,ItemInstance const&);
		void setEquippedSlot(ArmorSlot,int,int);
		void setEquippedSlot(ArmorSlot,int,int);
		void setFieldOfViewModifier(float);
		void setFieldOfViewModifier(float);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setName(std::string const&);
		void setName(std::string const&);
		void setPermissions(UserPermissionsLevel);
		void setPermissions(UserPermissionsLevel);
		void setPlayerGameType(GameType);
		void setPlayerGameType(GameType);
		void setPlayerGameTypePacketReceived(GameType);
		void setPlayerGameTypePacketReceived(GameType);
		void setRespawnDimensionId(DimensionId);
		void setRespawnDimensionId(DimensionId);
		void setRespawnPosition(BlockPos const&);
		void setRespawnPosition(BlockPos const&);
		void setSkin(std::string const&,std::string const&);
		void setSkin(std::string const&,std::string const&);
		void setSpeed(float);
		void setSpeed(float);
		void setTeleportDestination(Vec3 const&);
		void setTeleportDestination(Vec3 const&);
		void setXpTakeDelay(int);
		void setXpTakeDelay(int);
		void spawnExperienceOrb(Vec3 const&,int);
		void spawnExperienceOrb(Vec3 const&,int);
		void startCrafting(BlockPos const&);
		void startCrafting(BlockPos const&);
		void startDestroying(void);
		void startDestroying(void);
		void startSleepInBed(BlockPos const&);
		void startSleepInBed(BlockPos const&);
		void startStonecutting(BlockPos const&);
		void startStonecutting(BlockPos const&);
		void startUsingItem(ItemInstance,int);
		void startUsingItem(ItemInstance,int);
		void stopDestroying(void);
		void stopDestroying(void);
		void stopLoading(void);
		void stopLoading(void);
		void stopSleepInBed(bool,bool);
		void stopSleepInBed(bool,bool);
		void stopUsingItem(void);
		void stopUsingItem(void);
		void suspendRegion(void);
		void suspendRegion(void);
		void take(Entity &,int);
		void take(Entity &,int);
		void tickWorld(Tick const&);
		void tickWorld(Tick const&);
		void travel(float,float);
		void travel(float,float);
		void updateAi(void);
		void updateAi(void);
		void updateTeleportDestPos(void);
		void updateTeleportDestPos(void);
		void useItem(ItemInstance &);
		void useItem(ItemInstance &);
		void useNewAi(void);
		void useNewAi(void);
		void ~Player();
		void ~Player();
		void ~Player();
		void ~Player();
};
