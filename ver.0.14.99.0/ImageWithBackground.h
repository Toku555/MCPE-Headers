#pragma once
class ImageWithBackground{
	public:
		ImageWithBackground(int);
		ImageWithBackground(int);
		void init(mce::TextureGroup *,int,int,IntRectangle,IntRectangle,int,int,ResourceLocation const&);
		void init(mce::TextureGroup *,int,int,IntRectangle,IntRectangle,int,int,ResourceLocation const&);
		void render(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void setSize(float,float);
		void setSize(float,float);
		void ~ImageWithBackground();
		void ~ImageWithBackground();
		void ~ImageWithBackground();
		void ~ImageWithBackground();
};
