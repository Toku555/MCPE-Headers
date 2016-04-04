#pragma once
class PackedScrollContainer{
	public:
		PackedScrollContainer(bool,bool);
		void addFlagToScrollingPane(int);
		void handleMouseInput(float);
		void pointerPressed(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void scrollViewTo(GuiElement const&);
		void scrollViewToSelected(void);
		void setScrollBarOffset(float,float,float);
		void setSelectedBoxSize(int);
		void setTextboxText(std::string const&);
		void setWindowResizedFlag(bool);
		void setupPositions(void);
		void tick(MinecraftClient *);
		void ~PackedScrollContainer();
		void ~PackedScrollContainer();
};
