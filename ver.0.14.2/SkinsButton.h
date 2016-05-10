#pragma once
class SkinsButton{
	public:
		SkinsButton(Skin const&,SkinsButton**,mce::TextureGroup &,bool,bool,bool,bool);
		void drawBorder(int,int,int,int,int,Color const&);
		void getSkinName(MinecraftClient &);
		void getTextWidthOffset(MinecraftClient &);
		void isCurrentSkin(SkinRepository &);
		void isSelectedButton(MinecraftClient &);
		void render(MinecraftClient *,int,int);
		void renderInternalArea(MinecraftClient *);
		void renderPlayerModel(MinecraftClient *,float);
		void setupPositions(void);
		void ~SkinsButton();
		void ~SkinsButton();
};
