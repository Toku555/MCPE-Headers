#pragma once
class CategoryButton{
	public:
		CategoryButton(int,std::shared_ptr<ImageButton> const&,NinePatchLayer &,NinePatchLayer &);
		CategoryButton(int,std::shared_ptr<ImageButton> const&,NinePatchLayer &,NinePatchLayer &);
		void isSecondImage(bool);
		void isSecondImage(bool);
		void renderBg(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void ~CategoryButton();
		void ~CategoryButton();
};
