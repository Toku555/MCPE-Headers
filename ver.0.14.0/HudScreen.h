#pragma once
class HudScreen{
	public:
		HudScreen(MinecraftClient &);
		void handleDirection(DirectionId,float,float);
		void isModal(void);
		void isShowingMenu(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void shouldStealMouse(void);
		void ~HudScreen();
		void ~HudScreen();
};
