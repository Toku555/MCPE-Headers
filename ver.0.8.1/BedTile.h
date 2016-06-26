#pragma once
class BedTile{
	public:
		BedTile(int);
		void _setShape(void);
		void findStandUpPosition(Level *,int,int,int,int,Pos &);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResource(int,Random *);
		void getTexture(int,int);
		void isCubeShaped(void);
		void isHeadPiece(int);
		void isOccupied(int);
		void isSolidRender(void);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void setOccupied(Level *,int,int,int,bool);
		void spawnResources(Level *,int,int,int,int,float);
		void updateShape(LevelSource *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~BedTile();
		void ~BedTile();
};
