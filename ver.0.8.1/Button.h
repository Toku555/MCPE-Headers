#pragma once
class Button{
	public:
		Button(int,int,int,int,int,std::string const&);
		Button(int,int,int,std::string const&);
		Button(int,std::string const&);
		void clicked(Minecraft *,int,int);
		void getYImage(bool);
		void hovered(Minecraft *,int,int);
		void isInside(int,int);
		void isOveridingScreenRendering(void);
		void isPressed(int,int);
		void released(int,int);
		void render(Minecraft *,int,int);
		void renderBg(Minecraft *,int,int);
		void renderFace(Minecraft *,int,int);
		void setMsg(std::string const&);
		void setOverrideScreenRendering(bool);
		void setPressed(void);
		void ~Button();
		void ~Button();
};
