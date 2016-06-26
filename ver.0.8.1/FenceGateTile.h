#pragma once
class FenceGateTile{
	public:
		void getAABB(Level *,int,int,int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderShape(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~FenceGateTile();
		void ~FenceGateTile();
};
