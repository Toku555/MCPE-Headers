#pragma once
class WebTile{
	public:
		void entityInside(Level *,int,int,int,Entity *);
		void getAABB(Level *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResource(int,Random *);
		void isCubeShaped(void);
		void isSolidRender(void);
		void ~WebTile();
		void ~WebTile();
};
