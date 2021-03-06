#pragma once
class Label{
	public:
		Label(MinecraftClient &,std::string const&,Color const&,int,int,int,bool);
		void getText(void);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void setCentered(bool);
		void setColor(Color const&);
		void setText(std::string const&);
		void setTextRaw(std::string const&);
		void setWidth(int);
		void setupPositions(void);
		void ~Label();
		void ~Label();
};
