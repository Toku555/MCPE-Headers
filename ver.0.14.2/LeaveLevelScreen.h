#pragma once
class LeaveLevelScreen{
	public:
		LeaveLevelScreen(MinecraftClient &);
		void getScreenName(void);
		void init(void);
		void isPauseScreen(void);
		void isShowingMenu(void);
		void render(ScreenContext &);
		void renderGameBehind(void);
		void renderOnlyWhenTopMost(void);
		void tick(void);
		void ~LeaveLevelScreen();
		void ~LeaveLevelScreen();
};
