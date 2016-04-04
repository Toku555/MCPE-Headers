#pragma once
class VRAlignScreen{
	public:
		VRAlignScreen(MinecraftClient &);
		void _exit(void);
		void _init(int,int);
		void handleBackEvent(bool);
		void handlePointerPressed(bool);
		void isShowingMenu(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void ~VRAlignScreen();
		void ~VRAlignScreen();
};
