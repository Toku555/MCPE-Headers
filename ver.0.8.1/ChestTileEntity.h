#pragma once
class ChestTileEntity{
	public:
		ChestTileEntity(void);
		void _canOpenThis(void);
		void _getCenter(float &,float &,float &);
		void _saveClientSideState(CompoundTag *);
		void _unpair(void);
		void canOpen(void);
		void canPairWith(TileEntity *);
		void clearCache(void);
		void getContainerSize(void);
		void getItem(int);
		void getMaxStackSize(void);
		void getModelOffsetX(void);
		void getName(void);
		void getUpdatePacket(void);
		void load(CompoundTag *);
		void onNeighborChanged(int,int,int);
		void onUpdatePacket(CompoundTag *);
		void openBy(Player *);
		void pairWith(ChestTileEntity*,bool);
		void save(CompoundTag *);
		void setItem(int,ItemInstance *);
		void setRemoved(void);
		void shouldSave(void);
		void startOpen(void);
		void stillValid(Player *);
		void stopOpen(void);
		void tick(void);
		void triggerEvent(int,int);
		void unpair(void);
		void ~ChestTileEntity();
		void ~ChestTileEntity();
};
