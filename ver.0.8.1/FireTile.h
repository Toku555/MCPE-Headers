#pragma once
class FireTile{
	public:
		FireTile(int,std::string const&);
		void animateTick(Level *,int,int,int,Random *);
		void canBurn(LevelSource *,int,int,int);
		void checkBurn(Level *,int,int,int,int,Random *);
		void getAABB(Level *,int,int,int);
		void getFireOdds(Level *,int,int,int);
		void getFlammability(Level *,int,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResourceCount(Random *);
		void getTickDelay(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void isValidFireLocation(Level *,int,int,int);
		void mayPick(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onPlace(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~FireTile();
		void ~FireTile();
};
