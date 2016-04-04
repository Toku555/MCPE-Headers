#pragma once
class InBedScreen{
	public:
		InBedScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void handleBackEvent(bool);
		void init(void);
		void isShowingMenu(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void ~InBedScreen();
		void ~InBedScreen();
};
