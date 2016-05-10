#pragma once
class CubemapBackgroundScreen{
	public:
		CubemapBackgroundScreen(MinecraftClient &);
		void _init(int,int);
		void getScreenName(void);
		void getSendTelemetry(void);
		void isShowingMenu(void);
		void render(ScreenContext &);
		void renderCubemap(ScreenContext &);
		void renderOnlyWhenTopMost(void);
		void ~CubemapBackgroundScreen();
		void ~CubemapBackgroundScreen();
};
