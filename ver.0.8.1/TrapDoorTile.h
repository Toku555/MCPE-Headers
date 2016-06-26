#pragma once
class TrapDoorTile{
	public:
		TrapDoorTile(int,Material const*);
		void _setShape(int);
		void attachesTo(int);
		void attack(Level *,int,int,int,Player *);
		void blocksLight(void);
		void clip(Level *,int,int,int,Vec3 const&,Vec3 const&);
		void getAABB(Level *,int,int,int);
		void getDir(int);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getTileAABB(Level *,int,int,int);
		void isCubeShaped(void);
		void isOpen(int);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int,uchar);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void setOpen(Level *,int,int,int,bool);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~TrapDoorTile();
		void ~TrapDoorTile();
};
