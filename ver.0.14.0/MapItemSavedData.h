#pragma once
class MapItemSavedData{
	public:
		MapItemSavedData(EntityUniqueID);
		void TrackedMapEntity(MapItemSavedData::TrackedMapEntity::UniqueId const&,BlockSource &);
		void getBlockEntity(BlockSource &);
		void getDecorationRotation(BlockSource &);
		void getDimensionId(void);
		void getEntity(BlockSource &);
		void markDirty(int,int);
		void nextUpdatePacket(MapItemSavedData const&);
		void _addDecoration(MapDecoration::Type,Level &,MapItemSavedData::TrackedMapEntity::UniqueId const&,float,float,float);
		void _addTrackedMapEntity(MapItemSavedData::TrackedMapEntity::UniqueId const&,BlockSource &,MapDecoration::Type);
		void _findTrackedMapEntity(BlockPos const&);
		void _findTrackedMapEntity(Entity &);
		void _isPlayerHoldingMap(Player &);
		void _removeDecoration(MapItemSavedData::TrackedMapEntity::UniqueId const&);
		void _removeTrackedMapEntity(MapItemSavedData::TrackedMapEntity::UniqueId const&);
		void _updateTrackedEntityDecoration(BlockSource &,std::shared_ptr<MapItemSavedData::TrackedMapEntity>);
		void _updateTrackedEntityDecorations(BlockSource &);
		void addDecoration(EntityUniqueID,std::shared_ptr<MapDecoration>);
		void addTrackedMapEntity(BlockPos const&,BlockSource &,MapDecoration::Type);
		void addTrackedMapEntity(Entity &,MapDecoration::Type);
		void getFullDataPacket(void);
		void getMapId(void);
		void getParentMapId(void);
		void getTrackedMapEntity(BlockPos const&,BlockSource &);
		void getTrackedMapEntity(Entity &);
		void getUpdatePacket(ItemInstance &,Level &,Entity &);
		void getUpdatePacket(Level &,BlockPos const&);
		void hasParentMap(void);
		void isAdjacent(MapItemSavedData const&,int);
		void isFullyExplored(void);
		void load(CompoundTag const&);
		void removeTrackedMapEntity(BlockPos const&);
		void removeTrackedMapEntity(Entity &);
		void save(CompoundTag &);
		void setDirty(int,int);
		void setOrigin(Vec3,int);
		void setParentMapId(EntityUniqueID);
		void tickByBlock(BlockPos const&,BlockSource &);
		void tickCarriedBy(Entity &,ItemInstance &);
		void ~MapItemSavedData();
		void ~MapItemSavedData();
};
