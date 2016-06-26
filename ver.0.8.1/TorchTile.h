#pragma once
class TorchTile{
	public:
		void animateTick(Level *,int,int,int,Random *);
		void checkCanSurvive(Level *,int,int,int);
		void clip(Level *,int,int,int,Vec3 const&,Vec3 const&);
		void getAABB(Level *,int,int,int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void isConnection(Level *,int,int,int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onPlace(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~TorchTile();
		void ~TorchTile();
};
