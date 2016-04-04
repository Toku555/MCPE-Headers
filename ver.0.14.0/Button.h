#pragma once
class Button{
	public:
		Button(int,int,int,int,int,std::string const&,bool);
		Button(int,int,int,std::string const&);
		Button(int,std::string const&,bool);
		void _getWidth(MinecraftClient *,std::string const&,int);
		void clicked(MinecraftClient *,int,int);
		void drawPressed(int);
		void getYImage(bool);
		void hovered(MinecraftClient *,int,int);
		void isInside(int,int);
		void isOveridingScreenRendering(void);
		void isPressed(int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void released(int,int);
		void render(MinecraftClient *,int,int);
		void renderBg(MinecraftClient *,int,int);
		void renderFace(MinecraftClient *,int,int);
		void setMsg(std::string const&);
		void setOverrideScreenRendering(bool);
		void setPressed(bool);
		void setPressed(void);
		void ~Button();
		void ~Button();
};
