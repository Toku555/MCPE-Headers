#pragma once
class LargeImageButton{
	public:
		LargeImageButton(int,std::string const&);
		LargeImageButton(int,std::string const&,ImageDef &);
		void render(Minecraft *,int,int);
		void setupDefault(void);
		void ~LargeImageButton();
		void ~LargeImageButton();
};
