#pragma once
namespace j{
	class Entity{
		public:
		void _init(void);
		void _playStepSound(BlockPos const&,int);
		void _updateOwnerChunk(void);
		void checkFallDamage(float,bool);
		void getStatusFlag(int);
		void handleEntityEvent(EntityEvent,int);
		void handleInsidePortal(BlockPos const&);
		void moveTo(Vec3 const&,Vec2 const&);
		void onLightningHit(void);
		void onSynchedDataUpdate(int);
		void push(Entity&,bool);
		void push(Vec3 const&);
		void remove(void);
		void removeAllRiders(bool);
		void resetRegion(void);
		void sendMotionToServer(bool);
		void setSize(float,float);
		void setStatusFlag(int,bool);
		void stopRiding(bool,bool);
		void tick(BlockSource &);
		void ~Entity();
	}
};
