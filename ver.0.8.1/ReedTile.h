#pragma once
class ReedTile{
	public:
		void canSurvive(Level *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResource(int,Random *);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onFertilized(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~ReedTile();
		void ~ReedTile();
};
