#pragma once
class Region{
	public:
		Region(Level *,int,int,int,int,int,int);
		void getBiome(int,int);
		void getBrightness(int,int,int);
		void getData(int,int,int);
		void getMaterial(int,int,int);
		void getRawBrightness(int,int,int);
		void getRawBrightness(int,int,int,bool);
		void getTile(int,int,int);
		void isEmptyTile(int,int,int);
		void isSolidBlockingTile(int,int,int);
		void isSolidRenderTile(int,int,int);
		void ~Region();
		void ~Region();
};
