#pragma once
class GrassTile{
	public:
		GrassTile(int);
		void _randomWalk(Level *,int &,int &,int &,int);
		void getCarriedTexture(int,int);
		void getColor(LevelSource *,int,int,int);
		void getColor(int);
		void getResource(int,Random *);
		void getTexture(LevelSource *,int,int,int,int);
		void getTexture(int,int);
		void onFertilized(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~GrassTile();
		void ~GrassTile();
};
