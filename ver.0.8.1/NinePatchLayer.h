#pragma once
class NinePatchLayer{
	public:
		NinePatchLayer(NinePatchDescription const&,std::string const&,Textures *,float,float);
		void buildQuad(int);
		void d(Tesselator &,NinePatchLayer::CachedQuad const&);
		void draw(Tesselator &,float,float);
		void exclude(int);
		void getPatchInfo(int,int,float &,float &,float &,float &);
		void setExcluded(int);
		void setSize(float,float);
		void ~NinePatchLayer();
		void ~NinePatchLayer();
};
