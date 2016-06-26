#pragma once
class PumpkinTile{
	public:
		PumpkinTile(int,bool);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getTexture(int,int);
		void mayPlace(Level *,int,int,int);
		void onPlace(Level *,int,int,int);
		void ~PumpkinTile();
		void ~PumpkinTile();
};
