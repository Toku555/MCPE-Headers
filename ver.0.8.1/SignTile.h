#pragma once
class SignTile{
	public:
		SignTile(int,bool);
		void getAABB(Level *,int,int,int);
		void getRenderShape(void);
		void getResource(int,Random *);
		void getTileAABB(Level *,int,int,int);
		void getTileEntityType(void);
		void isCubeShaped(void);
		void isPathfindable(LevelSource *,int,int,int);
		void isSolidRender(void);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void updateShape(LevelSource *,int,int,int);
		void ~SignTile();
		void ~SignTile();
};
