#pragma once
class Entity{
	public:
		Entity(BlockSource &);
		Entity(BlockSource &);
		Entity(Level &);
		Entity(Level &);
		void _exitRide(Entity const&,float);
		void _exitRide(Entity const&,float);
		void _findRider(Entity&);
		void _findRiderID(Entity&);
		void _getBlockOnPos(void);
		void _getBlockOnPos(void);
		void _init(void);
		void _init(void);
		void _manageRiders(BlockSource &);
		void _manageRiders(BlockSource &);
		void _playStepSound(BlockPos const&,int);
		void _playStepSound(BlockPos const&,int);
		void _postInit(void);
		void _postInit(void);
		void _sendLinkPacket(EntityLink const&);
		void _tryPlaceAt(Vec3 const&);
		void _tryPlaceAt(Vec3 const&);
		void _updateOnewayCollisions(BlockSource &);
		void _updateOnewayCollisions(BlockSource &);
		void _updateOwnerChunk(void);
		void _updateOwnerChunk(void);
		void addRider(Entity&);
		void addRider(Entity&);
		void animateHurt(void);
		void animateHurt(void);
		void awardKillScore(Entity&,int);
		void awardKillScore(Entity&,int);
		void baseTick(void);
		void baseTick(void);
		void buildDebugInfo(std::string &);
		void buildDebugInfo(std::string &);
		void buildForward(void);
		void buildForward(void);
		void burn(int,bool);
		void burn(int,bool);
		void canAddRider(Entity&);
		void canAddRider(Entity&);
		void canBeLeashed(void);
		void canBeLeashed(void);
		void canInteractWith(Player &);
		void canInteractWith(Player &);
		void canShowNameTag(void);
		void canShowNameTag(void);
		void causeFallDamage(float);
		void causeFallDamage(float);
		void changeDimension(ChangeDimensionPacket &);
		void changeDimension(ChangeDimensionPacket &);
		void changeDimension(DimensionId);
		void changeDimension(DimensionId);
		void checkBlockCollisions(AABB const&);
		void checkBlockCollisions(AABB const&);
		void checkBlockCollisions(void);
		void checkBlockCollisions(void);
		void checkEntityOnewayCollision(BlockSource &,BlockPos const&);
		void checkEntityOnewayCollision(BlockSource &,BlockPos const&);
		void checkFallDamage(float,bool);
		void checkFallDamage(float,bool);
		void checkInsideBlocks(float);
		void checkInsideBlocks(float);
		void distanceSqrToBlockPosCenter(BlockPos const&);
		void distanceSqrToBlockPosCenter(BlockPos const&);
		void distanceTo(Entity const&);
		void distanceTo(Entity const&);
		void distanceTo(Vec3 const&);
		void distanceTo(Vec3 const&);
		void distanceToSqr(Entity const&);
		void distanceToSqr(Entity const&);
		void distanceToSqr(Vec3 const&);
		void distanceToSqr(Vec3 const&);
		void doFireHurt(int);
		void doFireHurt(int);
		void doWaterSplashEffect(void);
		void doWaterSplashEffect(void);
		void dropLeash(bool);
		void dropLeash(bool);
		void enableAutoSendPosRot(bool);
		void enableAutoSendPosRot(bool);
		void enforceRiderRotationLimit(void);
		void enforceRiderRotationLimit(void);
		void getAddPacket(void);
		void getAddPacket(void);
		void getAirSupply(void);
		void getAttachPos(EntityLocation);
		void getAttachPos(EntityLocation);
		void getBrightness(float);
		void getBrightness(float);
		void getCenter(float);
		void getCenter(float);
		void getControllingPlayer(void);
		void getControllingPlayer(void);
		void getDebugText(std::vector<std::string,std::allocator<std::string>> &);
		void getDebugText(std::vector<std::string,std::allocator<std::string>> &);
		void getDimension(void);
		void getDimension(void);
		void getDimensionId(void);
		void getDimensionId(void);
		void getEntityData(void);
		void getEntityData(void);
		void getEntityData(void);
		void getEntityData(void);
		void getEyeHeight(void);
		void getEyeHeight(void);
		void getEyePos(void);
		void getHandleWaterAABB(void);
		void getHandleWaterAABB(void);
		void getHeadHeight(void);
		void getHeadHeight(void);
		void getHurtColor(void);
		void getHurtColor(void);
		void getInteractText(Player &);
		void getInteractText(Player &);
		void getInterpolatedPosition(float);
		void getInterpolatedPosition(float);
		void getInterpolatedPosition2(float);
		void getInterpolatedPosition2(float);
		void getInterpolatedRotation(float);
		void getInterpolatedRotation(float);
		void getLeashHolder(void);
		void getLeashHolder(void);
		void getLevel(void);
		void getLevel(void);
		void getLinks(void);
		void getLinks(void);
		void getNameTag(void);
		void getNameTag(void);
		void getOutputSignal(void);
		void getOutputSignal(void);
		void getOwnerEntityType(void);
		void getOwnerEntityType(void);
		void getPickRadius(void);
		void getPickRadius(void);
		void getPortalCooldown(void);
		void getPortalCooldown(void);
		void getPortalEntranceAxis(void);
		void getPortalEntranceAxis(void);
		void getPortalWaitTime(void);
		void getPortalWaitTime(void);
		void getPos(void);
		void getPos(void);
		void getPosExtrapolated(float);
		void getPosExtrapolated(float);
		void getPosOld(void);
		void getPosOld(void);
		void getRadius(void);
		void getRadius(void);
		void getRandomPointInAABB(Random &);
		void getRandomPointInAABB(Random &);
		void getRegion(void);
		void getRegion(void);
		void getRide(void);
		void getRide(void);
		void getRideHeight(void);
		void getRideHeight(void);
		void getRidingHeight(void);
		void getRidingHeight(void);
		void getRotation(void);
		void getRotation(void);
		void getShadowHeightOffs(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void getShadowRadius(void);
		void getSourceUniqueID(void);
		void getSourceUniqueID(void);
		void getStatusFlag(int);
		void getStatusFlag(int);
		void getUniqueID(void);
		void getUniqueID(void);
		void getVelocity(void);
		void getVelocity(void);
		void getViewVector(float);
		void getViewVector(float);
		void getViewVector2(float);
		void getViewVector2(float);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void handleInsidePortal(BlockPos const&);
		void handleInsidePortal(BlockPos const&);
		void hasOutputSignal(signed char);
		void hasOutputSignal(signed char);
		void hasUniqueID(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void interactPreventDefault(void);
		void interactPreventDefault(void);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void interpolateTurn(Vec2 const&);
		void interpolateTurn(Vec2 const&);
		void intersects(Vec3 const&,Vec3 const&);
		void intersects(Vec3 const&,Vec3 const&);
		void isAlive(void);
		void isAlive(void);
		void isAutoSendEnabled(void);
		void isBaby(void);
		void isBaby(void);
		void isControlledByLocalInstance(void);
		void isControlledByLocalInstance(void);
		void isCreativeModeAllowed(void);
		void isCreativeModeAllowed(void);
		void isDebugging(void);
		void isFree(Vec3 const&);
		void isFree(Vec3 const&);
		void isFree(Vec3 const&,float);
		void isFree(Vec3 const&,float);
		void isGlobal(void);
		void isGlobal(void);
		void isImmobile(void);
		void isImmobile(void);
		void isInClouds(void);
		void isInLava(void);
		void isInLava(void);
		void isInWall(void);
		void isInWall(void);
		void isInWater(void);
		void isInWater(void);
		void isInWaterOrRain(void);
		void isInWaterOrRain(void);
		void isInWorld(void);
		void isInvisible(void);
		void isInvisible(void);
		void isLeashableType(void);
		void isLeashableType(void);
		void isLeashed(void);
		void isLeashed(void);
		void isOnFire(void);
		void isOnFire(void);
		void isPickable(void);
		void isPickable(void);
		void isPushable(void);
		void isPushable(void);
		void isPushableByPiston(void);
		void isPushableByPiston(void);
		void isRegionValid(void);
		void isRegionValid(void);
		void isRemoved(void);
		void isRemoved(void);
		void isRide(void);
		void isRide(void);
		void isRider(Entity&);
		void isRider(Entity&);
		void isRiding(void);
		void isRiding(void);
		void isShootable(void);
		void isShootable(void);
		void isSilent(void);
		void isSilent(void);
		void isSkyLit(float);
		void isSkyLit(float);
		void isSneaking(void);
		void isSneaking(void);
		void isSpawnableInCreative(EntityType);
		void isSpawnableInCreative(EntityType);
		void isSurfaceMob(void);
		void isSurfaceMob(void);
		void isUnderLiquid(MaterialType);
		void isUnderLiquid(MaterialType);
		void lavaHurt(void);
		void lavaHurt(void);
		void lerpMotion(Vec3 const&);
		void lerpMotion(Vec3 const&);
		void lerpTo(Vec3 const&,Vec2 const&,int);
		void lerpTo(Vec3 const&,Vec2 const&,int);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void loadLinks(CompoundTag const&,std::vector<EntityLink,std::allocator<EntityLink>> &);
		void loadLinks(CompoundTag const&,std::vector<EntityLink,std::allocator<EntityLink>> &);
		void makeStuckInWeb(void);
		void markHurt(void);
		void markHurt(void);
		void move(Vec3 const&);
		void move(Vec3 const&);
		void moveRelative(float,float,float);
		void moveRelative(float,float,float);
		void moveTo(Vec3 const&,Vec2 const&);
		void moveTo(Vec3 const&,Vec2 const&);
		void normalTick(void);
		void normalTick(void);
		void onBlockCollision(int);
		void onBlockCollision(int);
		void onBounceStarted(BlockPos const&,FullBlock const&);
		void onBounceStarted(BlockPos const&,FullBlock const&);
		void onLightningHit(void);
		void onLightningHit(void);
		void onOnewayCollision(BlockPos);
		void onOnewayCollision(BlockPos);
		void onSynchedDataUpdate(int);
		void onSynchedDataUpdate(int);
		void openContainerComponent(Player &);
		void openContainerComponent(Player &);
		void operator==(Entity&);
		void outOfWorld(void);
		void outOfWorld(void);
		void playSound(std::string const&,float,float,EntityLocation);
		void playSound(std::string const&,float,float,EntityLocation);
		void playerTouch(Player &);
		void playerTouch(Player &);
		void positionRider(Entity&);
		void positionRider(Entity&);
		void push(Entity&,bool);
		void push(Entity&,bool);
		void push(Vec3 const&);
		void push(Vec3 const&);
		void pushOutOfBlocks(Vec3 const&);
		void pushOutOfBlocks(Vec3 const&);
		void queryEntityRenderer(void);
		void queryEntityRenderer(void);
		void remove(void);
		void remove(void);
		void removeAllRiders(bool);
		void removeAllRiders(bool);
		void removeRider(Entity&);
		void removeRider(Entity&);
		void reset(void);
		void reset(void);
		void resetRegion(void);
		void resetRegion(void);
		void rideTick(void);
		void rideTick(void);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void saveLinks(void);
		void saveLinks(void);
		void saveWithoutId(CompoundTag &);
		void saveWithoutId(CompoundTag &);
		void sendMotionPacketIfNeeded(void);
		void sendMotionPacketIfNeeded(void);
		void sendMotionToServer(bool);
		void sendMotionToServer(bool);
		void setEquippedSlot(ArmorSlot,ItemInstance const&);
		void setEquippedSlot(ArmorSlot,ItemInstance const&);
		void setEquippedSlot(ArmorSlot,int,int);
		void setEquippedSlot(ArmorSlot,int,int);
		void setGlobal(bool);
		void setGlobal(bool);
		void setLeashHolder(EntityUniqueID);
		void setLeashHolder(EntityUniqueID);
		void setNameTag(std::string const&);
		void setNameTag(std::string const&);
		void setNameTagVisible(bool);
		void setNameTagVisible(bool);
		void setOnFire(int);
		void setOnFire(int);
		void setPos(EntityPos const&);
		void setPos(EntityPos const&);
		void setPos(Vec3 const&);
		void setPos(Vec3 const&);
		void setPreviousPosRot(Vec3 const&,Vec2 const&);
		void setPreviousPosRot(Vec3 const&,Vec2 const&);
		void setRegion(BlockSource &);
		void setRegion(BlockSource &);
		void setRot(Vec2 const&);
		void setRot(Vec2 const&);
		void setSize(float,float);
		void setSize(float,float);
		void setStatusFlag(int,bool);
		void setStatusFlag(int,bool);
		void setUniqueID(EntityUniqueID);
		void setUniqueID(EntityUniqueID);
		void shouldRender(void);
		void shouldRender(void);
		void spawnAtLocation(FullBlock,int);
		void spawnAtLocation(FullBlock,int);
		void spawnAtLocation(FullBlock,int,float);
		void spawnAtLocation(FullBlock,int,float);
		void spawnAtLocation(ItemInstance const&,float);
		void spawnAtLocation(ItemInstance const&,float);
		void spawnAtLocation(int,int);
		void spawnAtLocation(int,int);
		void spawnAtLocation(int,int,float);
		void spawnAtLocation(int,int,float);
		void startRiding(Entity&);
		void startRiding(Entity&);
		void stopRiding(bool,bool);
		void stopRiding(bool,bool);
		void testForEntityStacking(BlockSource &,AABB const&,std::vector<AABB,std::allocator<AABB>> &);
		void testForEntityStacking(BlockSource &,AABB const&,std::vector<AABB,std::allocator<AABB>> &);
		void tick(BlockSource &);
		void tick(BlockSource &);
		void tickLeash(void);
		void tickLeash(void);
		void turn(Vec2 const&,bool);
		void turn(Vec2 const&,bool);
		void updateInsideBlock(void);
		void updateInsideBlock(void);
		void updateWaterState(void);
		void updateWaterState(void);
		void ~Entity();
		void ~Entity();
		void ~Entity();
		void ~Entity();
};
