#pragma once
class NinePatchLayer{
	public:
		NinePatchLayer(NinePatchDescription const&,mce::TexturePtr,float,float);
		void buildQuad(int);
		void d(Tessellator &,NinePatchLayer::CachedQuad const&);
		void draw(Tessellator &,float,float);
		void exclude(int);
		void getPatchInfo(int,int,float &,float &,float &,float &);
		void setExcluded(int);
		void setSize(float,float);
		void ~NinePatchLayer();
		void ~NinePatchLayer();
};
