#pragma once
class ImageWithBackground{
	public:
		ImageWithBackground(int);
		void init(TextureGroup *,int,int,IntRectangle,IntRectangle,int,int,std::string const&);
		void render(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void setSize(float,float);
		void ~ImageWithBackground();
		void ~ImageWithBackground();
};
