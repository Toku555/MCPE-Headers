#pragma once
class TopSnowTile{
	public:
		void checkCanSurvive(Level *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getThickness(void);
		void getTileType(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void playerDestroy(Level *,Player *,int,int,int,int);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~TopSnowTile();
		void ~TopSnowTile();
};
