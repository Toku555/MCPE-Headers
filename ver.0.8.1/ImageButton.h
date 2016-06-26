#pragma once
class ImageButton{
	public:
		ImageButton(int,std::string const&);
		ImageButton(int,std::string const&,ImageDef const&);
		void isSecondImage(bool);
		void render(Minecraft *,int,int);
		void renderBg(Minecraft *,int,int);
		void setImageDef(ImageDef const&,bool);
		void setYOffset(int);
		void setupDefault(void);
		void ~ImageButton();
		void ~ImageButton();
};
