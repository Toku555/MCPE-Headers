#pragma once
class TileEntity{
	public:
		TileEntity(int);
		void _destructionWobble(float &,float &,float &);
		void _resetAABB(void);
		void clearCache(void);
		void clearRemoved(void);
		void destroyTick(Mob const*,float);
		void distanceToSqr(float,float,float);
		void getBrightness(float);
		void getData(void);
		void getShadowRadius(void);
		void getTile(void);
		void getUpdatePacket(void);
		void initTileEntities(void);
		void isFinished(void);
		void isRemoved(void);
		void isType(TileEntity*,int);
		void isType(int);
		void load(CompoundTag *);
		void loadStatic(CompoundTag *);
		void onNeighborChanged(int,int,int);
		void onUpdatePacket(CompoundTag *);
		void save(CompoundTag *);
		void setChanged(void);
		void setData(int);
		void setId(int,std::string const&);
		void setLevelAndPos(Level *,int,int,int);
		void setRemoved(void);
		void setupLighting(bool,float);
		void teardownTileEntities(void);
		void tick(void);
		void triggerEvent(int,int);
		void ~TileEntity();
		void ~TileEntity();
};
