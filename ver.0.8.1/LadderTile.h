#pragma once
class LadderTile{
	public:
		void getAABB(Level *,int,int,int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResourceCount(Random *);
		void getTileAABB(Level *,int,int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int,uchar);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void ~LadderTile();
		void ~LadderTile();
};
