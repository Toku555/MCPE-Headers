#pragma once
class WallTile{
	public:
		WallTile(int,Tile *);
		void connectsTo(LevelSource *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getRenderShape(void);
		void getSpawnResourcesAuxValue(int);
		void getTexture(int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void updateShape(LevelSource *,int,int,int);
		void ~WallTile();
		void ~WallTile();
};
