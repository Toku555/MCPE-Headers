#pragma once
class Bush{
	public:
		Bush(int,std::string const&);
		void canSurvive(Level *,int,int,int);
		void checkAlive(Level *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int,uchar);
		void mayPlaceOn(int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void tick(Level *,int,int,int,Random *);
		void ~Bush();
		void ~Bush();
};
