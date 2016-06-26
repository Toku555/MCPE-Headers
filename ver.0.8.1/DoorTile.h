#pragma once
class DoorTile{
	public:
		DoorTile(int,Material const*);
		void attack(Level *,int,int,int,Player *);
		void blocksLight(void);
		void clip(Level *,int,int,int,Vec3 const&,Vec3 const&);
		void getAABB(Level *,int,int,int);
		void getCompositeData(LevelSource *,int,int,int);
		void getDir(LevelSource *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResource(int,Random *);
		void getTexture(LevelSource *,int,int,int,int);
		void getTileAABB(Level *,int,int,int);
		void isCubeShaped(void);
		void isOpen(LevelSource *,int,int,int);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void playerWillDestroy(Level *,int,int,int,int,Player *);
		void setOpen(Level *,int,int,int,bool);
		void updateShape(LevelSource *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~DoorTile();
		void ~DoorTile();
};
