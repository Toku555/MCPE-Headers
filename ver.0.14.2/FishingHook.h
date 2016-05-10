#pragma once
class FishingHook{
	public:
		FishingHook(BlockSource &);
		FishingHook(BlockSource &,Entity &);
		FishingHook(BlockSource &,Entity &,Vec3 const&);
		void _createReward(void);
		void _fishPosEvent(void);
		void _fishTeaseEvent(void);
		void _fishhookEvent(void);
		void _getServerFishSpeed(void);
		void _getWaterPercentage(void);
		void _hitCheck(void);
		void _init(EntityUniqueID);
		void _lerpServerPos(void);
		void _postInit(void);
		void _pullCloser(Entity &,float);
		void _serverHooked(void);
		void _serverLured(void);
		void _serverNibble(void);
		void _serverTease(void);
		void _updateGravity(void);
		void _updateServer(void);
		void addAdditionalSaveData(CompoundTag &);
		void getEntityTypeId(void);
		void getOwner(void);
		void getShadowRadius(void);
		void getSourceUniqueID(void);
		void getTargetUniqueID(void);
		void handleEntityEvent(EntityEvent);
		void lerpMotion(Vec3 const&);
		void lerpTo(Vec3 const&,Vec2 const&,int);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void retrieve(void);
		void shoot(Vec3,float,float);
		void ~FishingHook();
		void ~FishingHook();
};
