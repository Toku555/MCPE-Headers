#pragma once
class FlipbookTexture{
	public:
		FlipbookTexture(mce::TextureGroup &,TextureUVCoordinateSet const&,std::string const&,int,int);
		void render(RenderGraphContext &);
		void tick(void);
		void ~FlipbookTexture();
		void ~FlipbookTexture();
};
