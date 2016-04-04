#pragma once
class ImageButton{
	public:
		ImageButton(int,std::string const&);
		ImageButton(int,std::string const&,ImageDef);
		void isSecondImage(bool);
		void render(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void setImageDef(ImageDef,bool);
		void setYOffset(int);
		void setupDefault(void);
		void ~ImageButton();
		void ~ImageButton();
};
