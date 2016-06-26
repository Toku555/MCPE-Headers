#pragma once
class FurnaceTile{
	public:
		FurnaceTile(int,bool);
		void animateTick(Level *,int,int,int,Random *);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getResource(int,Random *);
		void getTexture(LevelSource *,int,int,int,int);
		void getTexture(int);
		void getTileEntityType(void);
		void onRemove(Level *,int,int,int);
		void setLit(bool,Level *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~FurnaceTile();
		void ~FurnaceTile();
};
