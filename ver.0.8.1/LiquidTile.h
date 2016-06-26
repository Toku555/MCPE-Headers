#pragma once
class LiquidTile{
	public:
		LiquidTile(int,Material const*,std::string const&,std::string const&);
		void _trySpreadFire(Level *,int,int,int,Random *);
		void animateTick(Level *,int,int,int,Random *);
		void fizz(Level *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getBrightness(LevelSource *,int,int,int);
		void getColor(LevelSource *,int,int,int);
		void getDepth(Level *,int,int,int);
		void getFlow(LevelSource *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getRenderedDepth(LevelSource *,int,int,int);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getSlopeAngle(LevelSource *,int,int,int,Material const*);
		void getTexture(int);
		void getTextureNum(int);
		void getTickDelay(void);
		void handleEntityInside(Level *,int,int,int,Entity *,Vec3 &);
		void isCubeShaped(void);
		void isLiquidTile(void);
		void isSolidRender(void);
		void mayPick(int,bool);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onPlace(Level *,int,int,int);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void updateLiquid(Level *,int,int,int);
		void ~LiquidTile();
		void ~LiquidTile();
};
