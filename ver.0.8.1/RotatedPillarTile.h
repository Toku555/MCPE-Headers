#pragma once
class RotatedPillarTile{
	public:
		RotatedPillarTile(int,Material const*);
		void getDirTexture(int,int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderShape(void);
		void getTexture(int,int);
		void ~RotatedPillarTile();
		void ~RotatedPillarTile();
};
