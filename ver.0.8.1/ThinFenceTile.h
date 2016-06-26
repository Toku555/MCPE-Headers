#pragma once
class ThinFenceTile{
	public:
		ThinFenceTile(int,std::string const&,std::string const&,Material const*,bool);
		void addAABBs(Level *,int,int,int,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void attachsTo(int);
		void getRenderLayer(void);
		void getRenderShape(void);
		void getResource(int,Random *);
		void isCubeShaped(void);
		void isSolidRender(void);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void ~ThinFenceTile();
		void ~ThinFenceTile();
};
