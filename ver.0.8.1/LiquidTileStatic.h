#pragma once
class LiquidTileStatic{
	public:
		LiquidTileStatic(int,Material const*,std::string const&,std::string const&);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void setDynamic(Level *,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~LiquidTileStatic();
		void ~LiquidTileStatic();
};
