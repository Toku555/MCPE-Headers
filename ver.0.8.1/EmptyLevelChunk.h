#pragma once
class EmptyLevelChunk{
	public:
		void addEntity(Entity *);
		void getBlocksAndData(uchar *,int,int,int,int,int,int,int);
		void getBrightness(LightLayer const&,int,int,int);
		void getData(int,int,int);
		void getEntities(Entity *,AABB const&,std::vector<Entity *,std::allocator<Entity *>> &);
		void getHeightmap(int,int);
		void getRandom(long);
		void getRawBrightness(int,int,int,int);
		void getTile(int,int,int);
		void isAt(int,int);
		void isEmpty(void);
		void isSkyLit(int,int,int);
		void lightLava(void);
		void load(void);
		void markUnsaved(void);
		void recalcBlockLights(void);
		void recalcHeightmap(void);
		void recalcHeightmapOnly(void);
		void removeEntity(Entity *);
		void removeEntity(Entity *,int);
		void setBlocks(uchar *,int);
		void setBlocksAndData(uchar *,int,int,int,int,int,int,int);
		void setBrightness(LightLayer const&,int,int,int,int);
		void setData(int,int,int,int);
		void setTile(int,int,int,int);
		void setTileAndData(int,int,int,int,int);
		void skyBrightnessChanged(void);
		void unload(void);
		void ~EmptyLevelChunk();
		void ~EmptyLevelChunk();
};
