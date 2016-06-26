#pragma once
class LiquidTileDynamic{
	public:
		void canSpreadTo(Level *,int,int,int);
		void getHighest(Level *,int,int,int,int);
		void getSlopeDistance(Level *,int,int,int,int,int);
		void getSpread(Level *,int,int,int);
		void isWaterBlocking(Level *,int,int,int);
		void onPlace(Level *,int,int,int);
		void setStatic(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void trySpreadTo(Level *,int,int,int,int);
		void ~LiquidTileDynamic();
		void ~LiquidTileDynamic();
};
