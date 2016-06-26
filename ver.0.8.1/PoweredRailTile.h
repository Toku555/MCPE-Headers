#pragma once
class PoweredRailTile{
	public:
		PoweredRailTile(int);
		void findPoweredRailSignal(Level *,int,int,int,int,bool,int);
		void getTexture(int);
		void getTexture(int,int);
		void isSameRailWithPower(Level *,int,int,int,bool,int,int);
		void updateState(Level *,int,int,int,int,int,int);
		void ~PoweredRailTile();
		void ~PoweredRailTile();
};
