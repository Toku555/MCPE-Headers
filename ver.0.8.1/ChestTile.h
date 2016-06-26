#pragma once
class ChestTile{
	public:
		ChestTile(int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderShape(void);
		void getTexture(LevelSource *,int,int,int,int);
		void getTexture(int);
		void getTileEntityType(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void onRemove(Level *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~ChestTile();
		void ~ChestTile();
};
