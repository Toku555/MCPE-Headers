#pragma once
namespace j{
	class Level{
		public:
		void _createMapSavedData(EntityUniqueID const&);
		void addListener(LevelListener &);
		void broadcastEntityEvent(Entity *,EntityEvent);
		void entityChangeDimension(Entity &,DimensionId);
		void getDimension(DimensionId);
		void getMapSavedData(EntityUniqueID);
		void getMob(EntityUniqueID);
		void getNearestPlayer(Entity &,float);
		void getPlayer(EntityUniqueID);
		void isClientSide(void);
		void onAppSuspended(void);
		void requestMapInfo(EntityUniqueID);
		void setDayCycleActive(bool);
		void setTime(int);
		void updateLights(void);
		void ~Level();
		void ~Level();
	}
};
