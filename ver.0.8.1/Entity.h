#pragma once
class Entity{
	public:
		Entity(Level *);
		void _init(void);
		void animateHurt(void);
		void awardKillScore(Entity*,int);
		void baseTick(void);
		void burn(int);
		void causeFallDamage(float);
		void checkFallDamage(float,bool);
		void checkInsideTiles(void);
		void checkTileCollisions(void);
		void distanceTo(Entity*);
		void distanceTo(float,float,float);
		void distanceToSqr(Entity*);
		void distanceToSqr(float,float,float);
		void getAuxData(void);
		void getBrightness(float);
		void getCreatureBaseType(void);
		void getEntityData(void);
		void getEntityData(void);
		void getHeadHeight(void);
		void getPickRadius(void);
		void getRandomPointInAABB(Random &);
		void getRideHeight(void);
		void getRidingHeight(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void handleEntityEvent(char);
		void hashCode(void);
		void hurt(Entity*,int);
		void interactPreventDefault(void);
		void interactWithPlayer(Player *);
		void interpolateTurn(float,float);
		void intersects(float,float,float,float,float,float);
		void isAlive(void);
		void isCreativeModeAllowed(void);
		void isFree(float,float,float);
		void isFree(float,float,float,float);
		void isHangingEntity(void);
		void isInLava(void);
		void isInWall(void);
		void isInWater(void);
		void isItemEntity(void);
		void isMob(void);
		void isOnFire(void);
		void isPickable(void);
		void isPlayer(void);
		void isPushable(void);
		void isRiding(void);
		void isShootable(void);
		void isSkyLit(float);
		void isSneaking(void);
		void isUnderLiquid(Material const*);
		void lavaHurt(void);
		void lerpMotion(float,float,float);
		void lerpTo(float,float,float,float,float,int);
		void load(CompoundTag *);
		void makeStuckInWeb(void);
		void markHurt(void);
		void move(float,float,float);
		void moveRelative(float,float,float);
		void moveTo(float,float,float,float,float);
		void operator==(Entity&);
		void outOfWorld(void);
		void playStepSound(int,int,int,int);
		void playerTouch(Player *);
		void positionRider(bool);
		void push(Entity*);
		void push(float,float,float);
		void queryEntityRenderer(void);
		void remove(void);
		void reset(void);
		void resetPos(bool);
		void ride(Entity*);
		void rideTick(void);
		void save(CompoundTag *);
		void saveAsMount(CompoundTag *);
		void saveWithoutId(CompoundTag *);
		void setEquippedSlot(int,int,int);
		void setLevel(Level *);
		void setOnFire(int);
		void setPos(EntityPos *);
		void setPos(float,float,float);
		void setRot(float,float);
		void setSize(float,float);
		void setupLighting(bool,float);
		void shouldRender(Vec3 &);
		void shouldRenderAtSqrDistance(float);
		void spawnAtLocation(ItemInstance const&,float);
		void spawnAtLocation(int,int);
		void spawnAtLocation(int,int,float);
		void tick(void);
		void turn(float,float);
		void ~Entity();
		void ~Entity();
};