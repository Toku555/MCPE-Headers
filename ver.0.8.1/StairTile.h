#pragma once
class StairTile{
	public:
		StairTile(int,Tile *,int);
		void addAABBs(Level *,int,int,int,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void addLights(Level *,int,int,int);
		void animateTick(Level *,int,int,int,Random *);
		void attack(Level *,int,int,int,Player *);
		void clip(Level *,int,int,int,Vec3 const&,Vec3 const&);
		void destroy(Level *,int,int,int,int);
		void getBrightness(LevelSource *,int,int,int);
		void getExplosionResistance(Entity *);
		void getPlacementDataValue(Level *,int,int,int,int,float,float,float,Mob *,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResourceCount(Random *);
		void getTexture(LevelSource *,int,int,int,int);
		void getTexture(int);
		void getTexture(int,int);
		void getTickDelay(void);
		void getTileAABB(Level *,int,int,int);
		void getTileType(void);
		void handleEntityInside(Level *,int,int,int,Entity *,Vec3 &);
		void isCubeShaped(void);
		void isLockAttached(LevelSource *,int,int,int,int);
		void isSolidRender(void);
		void isStairs(int);
		void mayPick(int,bool);
		void mayPick(void);
		void mayPlace(Level *,int,int,int,uchar);
		void onPlace(Level *,int,int,int);
		void onRemove(Level *,int,int,int);
		void prepareRender(Level *,int,int,int);
		void setBaseShape(LevelSource *,int,int,int);
		void setInnerPieceShape(LevelSource *,int,int,int);
		void setStepShape(LevelSource *,int,int,int);
		void stepOn(Level *,int,int,int,Entity *);
		void tick(Level *,int,int,int,Random *);
		void updateShape(LevelSource *,int,int,int);
		void use(Level *,int,int,int,Player *);
		void wasExploded(Level *,int,int,int);
		void ~StairTile();
		void ~StairTile();
};
