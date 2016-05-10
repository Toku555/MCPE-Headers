#pragma once
class ScreenRenderer{
	public:
		ScreenRenderer(void);
		void blit(mce::TexturePtr const&,IntRectangle const&);
		void blit(mce::TexturePtr const&,float,float,int,int,float,float,int,int,mce::MaterialPtr *);
		void blit(mce::TexturePtr const&,int,int,int,int,int,int,int,int,mce::MaterialPtr *);
		void blit(mce::TexturePtr const&,std::vector<BlitParams,std::allocator<BlitParams>> const&);
		void blitRaw(mce::TexturePtr const&,float,float,float,float,float,float,float,float,float);
		void drawCenteredString(Font *,std::string const&,int,int,Color const&);
		void drawRect(int,int,int,int,Color const&,Color const&,Color const&,Color const&,int);
		void drawRect(int,int,int,int,Color const&,int);
		void drawString(Font *,std::string const&,int,int,Color const&);
		void fill(float,float,float,float,Color const&);
		void fill(int,int,int,int,Color const&);
		void fillGradient(float,float,float,float,Color const&,Color const&);
		void fillGradient(int,int,int,int,Color const&,Color const&);
		void fillHorizontalGradient(float,float,float,float,Color const&,Color const&);
		void fillHorizontalGradient(int,int,int,int,Color const&,Color const&);
		void fillStencil(float,float,float,float);
		void getMaterial(ScreenRenderer::ScreenMaterial);
		void reloadResources(mce::TextureGroup &);
		void singleton(void);
};
