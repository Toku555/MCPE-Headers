#pragma once
namespace LevelChunk{
	class DirtyTicksCounter{
		public:
		void DirtyTicksCounter(void);
		void getTicksSinceLastChange(void);
		void getTotalDirtyTicks(void);
		void max(void);
		void operator++(void);
		void touch(void);
		void _createBlockEntity(BlockPos const&,BlockSource *,BlockID,BlockID);
		void _deserializeEntity(BlockSource &,IDataInput &,std::vector<EntityLink,std::allocator<EntityLink>> &);
		void _lightGap(BlockSource &,BlockPos const&);
		void _lightGaps(BlockSource &,ChunkBlockPos const&);
		void _placeBlockEntity(std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void _placeCallbacks(ChunkBlockPos const&,BlockID,BlockID,BlockSource *);
		void _recalcHeight(ChunkBlockPos const&,BlockSource *);
		void _removeCallbacks(ChunkBlockPos const&,BlockID,BlockID,BlockSource *);
		void addEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void applySeasonsPostProcess(BlockSource &);
		void changeState(ChunkState,ChunkState);
		void checkBiomeStates(void);
		void checkSeasonsPostProcessDirty(void);
		void deferLightEmitter(BlockPos const&);
		void deserialize(KeyValueInput &);
		void deserializeBiomeStates(IDataInput &);
		void deserializeBlockEntities(IDataInput &);
		void deserializeBlockExtraData(IDataInput &);
		void deserializeTerrain(IDataInput &);
		void deserializeTicks(IDataInput &);
		void getBiome(ChunkBlockPos const&);
		void getBlockEntities(void);
		void getBlockEntity(ChunkBlockPos const&);
		void getBlockEntityMap(void);
		void getBlockExtraData(ChunkBlockPos const&);
		void getBlockLight(void);
		void getBrightness(LightLayer const&,ChunkBlockPos const&);
		void getDimension(void);
		void getDimensionId(void);
		void getEntities(Entity *,AABB const&,std::vector<Entity *,std::allocator<Entity *>> &);
		void getEntities(EntityType,AABB const&,std::vector<Entity *,std::allocator<Entity *>> &);
		void getEntities(void);
		void getGenerator(void);
		void getGrassColor(ChunkBlockPos const&);
		void getHeightmap(ChunkBlockPos const&);
		void getLastTick(void);
		void getLightLayer(LightLayer const&);
		void getLoadedFormat(void);
		void getMax(void);
		void getMin(void);
		void getPosition(void);
		void getRawBlockLight(void);
		void getRawBlocks(void);
		void getRawBrightness(ChunkBlockPos const&,Brightness);
		void getRawData(void);
		void getRawSkyLight(void);
		void getSkyLight(void);
		void getState(void);
		void getTopRainBlockPos(ChunkBlockPos const&);
		void getTopSolidBlock(ChunkBlockPos const&,bool);
		void hasAnyBiomeStates(void);
		void hasAnyBlockExtraData(void);
		void hasBlockEntity(ChunkBlockPos const&);
		void hasEntity(Entity &);
		void isAABBFullyInChunk(BlockPos const&,BlockPos const&);
		void isAABBOverlappingChunk(BlockPos const&,BlockPos const&);
		void isBlockInChunk(BlockPos const&);
		void isDirty(void);
		void isReadOnly(void);
		void isSkyLit(ChunkBlockPos const&);
		void key(void);
		void moveLightSources(void);
		void needsSaving(int,int);
		void needsUpgradeFix(void);
		void onBlockEntityChanged(void);
		void onBlocksChanged(void);
		void onEntityChanged(void);
		void onLoaded(BlockSource &);
		void operator delete(void *);
		void operator new(uint);
		void recalcBlockLights(void);
		void recalcHeightmap(void);
		void removeEntity(Entity &);
		void serializeBiomeStates(IDataOutput &);
		void serializeBlockEntities(IDataOutput &);
		void serializeBlockExtraData(IDataOutput &);
		void serializeEntities(IDataOutput &);
		void serializeTerrain(IDataOutput &);
		void serializeTicks(IDataOutput &);
		void setBiome(Biome const&,ChunkBlockPos const&);
		void setBlockAndData(ChunkBlockPos const&,FullBlock,BlockSource *);
		void setBlockExtraData(ChunkBlockPos const&,ushort);
		void setBrightness(LightLayer const&,ChunkBlockPos const&,Brightness);
		void setData(ChunkBlockPos const&,int);
		void setFinalized(LevelChunk::Finalization);
		void setGenerator(ChunkSource *);
		void setGrassColor(int,ChunkBlockPos const&);
		void setPendingEntities(std::string &);
		void setSaved(void);
		void setUnsaved(void);
		void tick(Player *,Tick const&);
		void tickBlockEntities(BlockSource &);
		void tickBlocks(Player *);
		void tickRedstoneBlocks(BlockSource &);
		void trimMemoryPool(void);
		void tryChangeState(ChunkState,ChunkState);
		void updateLightsAndHeights(BlockSource &);
		void wasTickedThisTick(Tick const&);
		void ~LevelChunk();
	}
};
