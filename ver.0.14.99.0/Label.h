#pragma once
class Label{
	public:
		Label(MinecraftClient &,std::string const&,Color const&,int,int,int,bool,bool);
		Label(MinecraftClient &,std::string const&,Color const&,int,int,int,bool,bool);
		void getText(void);
		void getText(void);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void setCentered(bool);
		void setCentered(bool);
		void setColor(Color const&);
		void setColor(Color const&);
		void setText(std::string const&);
		void setText(std::string const&);
		void setTextRaw(std::string const&);
		void setTextRaw(std::string const&);
		void setWidth(int);
		void setWidth(int);
		void setWrap(bool);
		void setupPositions(void);
		void setupPositions(void);
		void ~Label();
		void ~Label();
		void ~Label();
		void ~Label();
};
