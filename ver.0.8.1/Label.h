#pragma once
class Label{
	public:
		Label(std::string,Minecraft *,int,int,int,int,bool);
		void getText(void);
		void render(Minecraft *,int,int);
		void setText(std::string);
		void setWidth(int);
		void setupPositions(void);
		void ~Label();
		void ~Label();
};
