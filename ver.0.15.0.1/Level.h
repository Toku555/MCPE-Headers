#pragma once
class Level{
	public:
		Level(SoundPlayer &,std::unique_ptr<LevelStorage,std::default_delete<LevelStorage>>,std::string const&,LevelSettings const&,bool);
		Level(SoundPlayer &,std::unique_ptr<LevelStorage,std::default_delete<LevelStorage>>,std::string const&,LevelSettings const&,bool);
		void _backgroundTickSeasons(void);
		void _backgroundTickSeasons(void);
		void _chunkDirty(BlockSource *,LevelChunk *);
		void _cleanupDisconnectedPlayers(void);
		void _cleanupDisconnectedPlayers(void);
		void _createMapSavedData(EntityUniqueID const&);
		void _createMapSavedData(EntityUniqueID const&);
		void _destroyEffect(BlockPos const&,FullBlock,Vec3 const&,float);
		void _destroyEffect(BlockPos const&,FullBlock,Vec3 const&,float);
		void _getBlockPermissions(BlockSource &,BlockPos const&,bool);
		void _handleChangeDimensionRequests(void);
		void _handleChangeDimensionRequests(void);
		void _loadMapData(EntityUniqueID const&);
		void _loadMapData(EntityUniqueID const&);
		void _playerChangeDimension(Player *,ChangeDimensionRequest &);
		void _playerChangeDimension(Player *,ChangeDimensionRequest &);
		void _removeAllPlayers(void);
		void _saveAllMapData(void);
		void _saveMapData(MapItemSavedData &);
		void _saveMapData(MapItemSavedData &);
		void _saveSomeDirtyChunks(void);
		void _saveSomeDirtyChunks(void);
		void _syncTime(int);
		void _tickTemporaryPointers(void);
		void addEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void addEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void addGlobalEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void addGlobalEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void addListener(LevelListener &);
		void addListener(LevelListener &);
		void addParticle(ParticleType,Vec3 const&,Vec3 const&,int);
		void addParticle(ParticleType,Vec3 const&,Vec3 const&,int);
		void addPlayer(std::unique_ptr<Player,std::default_delete<Player>>);
		void addPlayer(std::unique_ptr<Player,std::default_delete<Player>>);
		void animateTick(Entity &);
		void animateTick(Entity &);
		void broadcastDimensionEvent(BlockSource &,LevelEvent,Vec3 const&,int,Player *);
		void broadcastDimensionEvent(BlockSource &,LevelEvent,Vec3 const&,int,Player *);
		void broadcastEntityEvent(Entity *,EntityEvent);
		void broadcastEntityEvent(Entity *,EntityEvent);
		void broadcastLevelEvent(LevelEvent,Vec3 const&,int,Player *);
		void broadcastLevelEvent(LevelEvent,Vec3 const&,int,Player *);
		void checkAndHandleMaterial(AABB const&,MaterialType,Entity *);
		void checkAndHandleMaterial(AABB const&,MaterialType,Entity *);
		void checkBlockPermissions(Player &,BlockPos const&,BlockSource &);
		void checkBlockPermissions(Player &,BlockPos const&,BlockSource &);
		void checkMaterial(AABB const&,MaterialType,Entity *);
		void checkMaterial(AABB const&,MaterialType,Entity *);
		void createDimension(DimensionId);
		void createDimension(DimensionId);
		void createMapSavedData(EntityUniqueID const&);
		void createMapSavedData(EntityUniqueID const&);
		void createMapSavedData(std::vector<EntityUniqueID,std::allocator<EntityUniqueID>> const&);
		void createRandomSeed(void);
		void createRandomSeed(void);
		void createUniqueLevelID(std::string const&);
		void createUniqueLevelID(std::string const&);
		void destroyBlock(BlockSource &,BlockPos const&,bool);
		void destroyBlock(BlockSource &,BlockPos const&,bool);
		void directTickEntities(BlockSource &);
		void directTickEntities(BlockSource &);
		void doesMapExist(EntityUniqueID);
		void doesMapExist(EntityUniqueID);
		void entityChangeDimension(Entity &,DimensionId);
		void entityChangeDimension(Entity &,DimensionId);
		void explode(BlockSource &,Entity *,Vec3 const&,float,bool);
		void explode(BlockSource &,Entity *,Vec3 const&,float,bool);
		void extinguishFire(BlockSource &,int,int,int,signed char);
		void extinguishFire(BlockSource &,int,int,int,signed char);
		void findPath(Entity &,Entity &,float,bool,bool,bool,bool);
		void findPath(Entity &,Entity &,float,bool,bool,bool,bool);
		void findPath(Entity &,int,int,int,float,bool,bool,bool,bool);
		void findPath(Entity &,int,int,int,float,bool,bool,bool,bool);
		void forceRemoveEntity(Entity &);
		void forceRemoveEntity(Entity &);
		void getAdventureSettings(void);
		void getAdventureSettings(void);
		void getCurrentTick(void);
		void getCurrentTick(void);
		void getDefaultSpawn(void);
		void getDefaultSpawn(void);
		void getDifficulty(void);
		void getDifficulty(void);
		void getDimension(DimensionId);
		void getDimension(DimensionId);
		void getEntities(DimensionId,EntityType,AABB const&,std::vector<Entity *,std::allocator<Entity *>> &);
		void getEntities(DimensionId,EntityType,AABB const&,std::vector<Entity *,std::allocator<Entity *>> &);
		void getEntity(EntityUniqueID,bool);
		void getEntity(EntityUniqueID,bool);
		void getGlobalEntities(void);
		void getGlobalEntities(void);
		void getGlobalPermissions(void);
		void getGlobalPermissions(void);
		void getHitResult(void);
		void getHitResult(void);
		void getLevelData(void);
		void getLevelData(void);
		void getLevelId(void);
		void getLevelStorage(void);
		void getLevelStorage(void);
		void getLightsToUpdate(void);
		void getLocalPlayer(void);
		void getLocalPlayer(void);
		void getMapSavedData(EntityUniqueID);
		void getMapSavedData(EntityUniqueID);
		void getMob(EntityUniqueID);
		void getMob(EntityUniqueID);
		void getMobSpawner(void);
		void getMobSpawner(void);
		void getNearestAttackablePlayer(Entity &,float);
		void getNearestAttackablePlayer(Entity &,float);
		void getNearestPlayer(Entity &,float);
		void getNearestPlayer(Entity &,float);
		void getNearestPlayer(float,float,float,float);
		void getNearestPlayer(float,float,float,float);
		void getNetEventCallback(void);
		void getNetEventCallback(void);
		void getNewUniqueID(void);
		void getNewUniqueID(void);
		void getNextPlayer(EntityUniqueID const&,bool);
		void getNextPlayer(EntityUniqueID const&,bool);
		void getNumRemotePlayers(void);
		void getNumRemotePlayers(void);
		void getPacketSender(void);
		void getPacketSender(void);
		void getPlayer(EntityUniqueID);
		void getPlayer(EntityUniqueID);
		void getPlayer(mce::UUID const&);
		void getPlayer(mce::UUID const&);
		void getPlayer(std::string const&);
		void getPlayer(std::string const&);
		void getPlayerList(void);
		void getPlayerList(void);
		void getPlayerNames(void);
		void getPlayers(void);
		void getPlayers(void);
		void getPortalForcer(void);
		void getPortalForcer(void);
		void getPrevPlayer(EntityUniqueID const&,bool);
		void getRandom(void);
		void getRandom(void);
		void getRandomPlayer(void);
		void getScreenshotsFolder(void);
		void getScreenshotsFolder(void);
		void getSeed(void);
		void getSeed(void);
		void getSharedSpawnPos(void);
		void getSharedSpawnPos(void);
		void getSpawnEntities(void);
		void getSpawnEntities(void);
		void getSpecialMultiplier(DimensionId);
		void getSpecialMultiplier(DimensionId);
		void getTearingDown(void);
		void getTearingDown(void);
		void getTime(void);
		void getTime(void);
		void getVillages(void);
		void getVillages(void);
		void handleLevelEvent(LevelEvent,Vec3 const&,int);
		void handleLevelEvent(LevelEvent,Vec3 const&,int);
		void hasLevelStorage(void);
		void hasLevelStorage(void);
		void isClientSide(void);
		void isClientSide(void);
		void isDayCycleActive(void);
		void isDayCycleActive(void);
		void isExporting(void);
		void isExporting(void);
		void isNightMode(void);
		void isUpdatingLights(void);
		void isUpdatingLights(void);
		void loadPlayer(std::unique_ptr<Player,std::default_delete<Player>>);
		void loadPlayer(std::unique_ptr<Player,std::default_delete<Player>>);
		void mayInteract(Player &,int,int,int);
		void mayInteract(Player &,int,int,int);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onChunkDiscarded(LevelChunk &);
		void onChunkDiscarded(LevelChunk &);
		void onChunkLoaded(LevelChunk &);
		void onChunkLoaded(LevelChunk &);
		void onNewChunkFor(Player &,LevelChunk &);
		void onNewChunkFor(Player &,LevelChunk &);
		void onPlayerDeath(Player &,EntityDamageSource const&);
		void onPlayerDeath(Player &,EntityDamageSource const&);
		void onSourceCreated(BlockSource &);
		void onSourceCreated(BlockSource &);
		void onSourceDestroyed(BlockSource &);
		void onSourceDestroyed(BlockSource &);
		void playSound(Entity *,std::string const&,float,float,EntityLocation);
		void playSound(Entity *,std::string const&,float,float,EntityLocation);
		void playSound(Vec3 const&,std::string const&,float,float);
		void playSound(Vec3 const&,std::string const&,float,float);
		void potionSplash(Vec3 const&,Color const&,bool);
		void potionSplash(Vec3 const&,Color const&,bool);
		void registerTemporaryPointer(_TickPtr &);
		void registerTemporaryPointer(_TickPtr &);
		void removeAllNonPlayerEntities(EntityUniqueID);
		void removeAllNonPlayerEntities(EntityUniqueID);
		void removeEntity(Entity &,bool);
		void removeEntity(Entity &,bool);
		void removeEntity(std::unique_ptr<Entity,std::default_delete<Entity>> &&,bool);
		void removeEntity(std::unique_ptr<Entity,std::default_delete<Entity>> &&,bool);
		void removeListener(LevelListener &);
		void removeListener(LevelListener &);
		void requestMapInfo(EntityUniqueID);
		void requestMapInfo(EntityUniqueID);
		void requestPlayerChangeDimension(Player &,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>);
		void requestPlayerChangeDimension(Player &,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>);
		void runLightUpdates(BlockSource &,LightLayer const&,BlockPos const&,BlockPos const&);
		void runLightUpdates(BlockSource &,LightLayer const&,BlockPos const&,BlockPos const&);
		void saveBiomeData(void);
		void saveBiomeData(void);
		void saveDirtyChunks(void);
		void saveDirtyChunks(void);
		void saveGameData(void);
		void saveGameData(void);
		void saveLevelData(void);
		void savePlayers(void);
		void setDayCycleActive(bool);
		void setDayCycleActive(bool);
		void setDefaultSpawn(BlockPos const&);
		void setDefaultSpawn(BlockPos const&);
		void setDifficulty(Difficulty);
		void setDifficulty(Difficulty);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setIsClientSide(bool);
		void setIsExporting(bool);
		void setIsExporting(bool);
		void setLevelId(std::string);
		void setLevelId(std::string);
		void setNetEventCallback(NetEventCallback *);
		void setNetEventCallback(NetEventCallback *);
		void setNightMode(bool);
		void setPacketSender(PacketSender *);
		void setPacketSender(PacketSender *);
		void setSavedData(std::string const&,SavedData *);
		void setSpawnSettings(bool);
		void setSpawnSettings(bool);
		void setStopTime(int);
		void setStopTime(int);
		void setTime(int);
		void setTime(int);
		void takePicture(TextureData &,Entity *,Entity *,bool,std::string const&);
		void tick(void);
		void tick(void);
		void tickEntities(void);
		void tickEntities(void);
		void unregisterTemporaryPointer(_TickPtr &);
		void unregisterTemporaryPointer(_TickPtr &);
		void updateLights(void);
		void updateLights(void);
		void updateSleepingPlayerList(void);
		void updateSleepingPlayerList(void);
		void upgradeStorageVersion(StorageVersion);
		void upgradeStorageVersion(StorageVersion);
		void ~Level();
		void ~Level();
		void ~Level();
		void ~Level();
};
