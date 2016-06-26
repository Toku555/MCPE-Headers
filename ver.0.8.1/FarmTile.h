#pragma once
class FarmTile{
	public:
		FarmTile(int);
		void fallOn(Level *,int,int,int,Entity *,float);
		void getAABB(Level *,int,int,int);
		void getResource(int,Random *);
		void getTexture(int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~FarmTile();
		void ~FarmTile();
};
