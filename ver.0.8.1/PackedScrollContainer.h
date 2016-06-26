#pragma once
class PackedScrollContainer{
	public:
		PackedScrollContainer(bool,int,int);
		void mouseClicked(Minecraft *,int,int,int);
		void render(Minecraft *,int,int);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(Minecraft *);
		void ~PackedScrollContainer();
		void ~PackedScrollContainer();
};
