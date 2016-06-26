#pragma once
class HeavyTile{
	public:
		HeavyTile(int,std::string const&);
		HeavyTile(int,std::string const&,Material const*);
		void checkSlide(Level *,int,int,int);
		void falling(FallingTile *);
		void getTickDelay(void);
		void isFree(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void onLand(Level *,int,int,int,int);
		void onPlace(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~HeavyTile();
		void ~HeavyTile();
};
