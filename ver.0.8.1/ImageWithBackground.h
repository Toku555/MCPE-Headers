#pragma once
class ImageWithBackground{
	public:
		ImageWithBackground(int);
		void init(Textures *,int,int,IntRectangle,IntRectangle,int,int,std::string const&);
		void render(Minecraft *,int,int);
		void renderBg(Minecraft *,int,int);
		void setSize(float,float);
		void ~ImageWithBackground();
		void ~ImageWithBackground();
};
