#pragma once
class BaseRailTile{
	public:
		BaseRailTile(int,bool);
		void Rail(Level *,int,int,int);
		void canConnectTo(BaseRailTile::Rail*);
		void connectTo(BaseRailTile::Rail*);
		void connectsTo(BaseRailTile::Rail*);
		void countPotentialConnections(void);
		void getRail(TilePos const&);
		void hasConnection(int,int,int);
		void hasNeighborRail(int,int,int);
		void hasRail(int,int,int);
		void place(bool,bool);
		void removeSoftConnections(void);
		void updateConnections(int);
		void blocksLight(void);
		void clip(Level *,int,int,int,Vec3 const&,Vec3 const&);
		void getAABB(Level *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResourceCount(Random *);
		void getThickness(void);
		void isCubeShaped(void);
		void isRail(Level *,int,int,int);
		void isRail(int);
		void isSolidRender(void);
		void isUsesDataBit(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onPlace(Level *,int,int,int);
		void onRemove(Level *,int,int,int);
		void updateDir(Level *,int,int,int,bool);
		void updateShape(LevelSource *,int,int,int);
		void updateState(Level *,int,int,int,int,int,int);
		void ~BaseRailTile();
		void ~BaseRailTile();
};
