#pragma once
class Dimension{
	public:
		void _createGenerator(GeneratorType);
		void addMoveEntityPacket(MoveEntityPacketData const&);
		void addSetEntityMotionPacket(Entity &);
		void createNew(DimensionId,Level &);
		void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(void);
		void getBrightnessRamp(void);
		void getChunkSource(void);
		void getCircuitSystem(void);
		void getClearColorScale(void);
		void getCloudColor(float);
		void getCloudHeight(void);
		void getEntity(EntityUniqueID,bool);
		void getEntityIdMap(void);
		void getEntityIdMapConst(void);
		void getFogColor(float);
		void getFogDistanceScale(void);
		void getHeight(void);
		void getId(void);
		void getLevel(void);
		void getLevelConst(void);
		void getMoonBrightness(void);
		void getMoonPhase(void);
		void getOldSkyDarken(float);
		void getSeasons(void);
		void getSkyColor(BlockSource &,BlockPos const&,float);
		void getSkyColor(Entity const&,float);
		void getSkyDarken(float);
		void getSkyDarken(void);
		void getSpawnYPosition(void);
		void getStarBrightness(float);
		void getSunAngle(float);
		void getSunIntensity(float,Entity const&,float);
		void getSunlightDirection(float);
		void getSunriseColor(float);
		void getTimeOfDay(float);
		void getTimeOfDay(int,float);
		void getWeather(void);
		void hasBedrockFog(void);
		void hasCeiling(void);
		void hasGround(void);
		void init(void);
		void isDay(void);
		void isFoggyAt(int,int);
		void isNaturalDimension(void);
		void isRedstoneTick(void);
		void isUltraWarm(void);
		void isValidSpawn(int,int);
		void load(CompoundTag const&);
		void mayRespawn(void);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockEvent(BlockSource &,int,int,int,int,int);
		void onNewChunkFor(Player &,LevelChunk &);
		void save(CompoundTag &);
		void sendBroadcast(Packet const&,Player *);
		void sendDimensionPackets(void);
		void setBrightnessRamp(uint,float);
		void setCeiling(bool);
		void setUltraWarm(bool);
		void tick(void);
		void transferEntity(Vec3 const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>);
		void updateLightRamp(void);
		void ~Dimension();
		void ~Dimension();
};
