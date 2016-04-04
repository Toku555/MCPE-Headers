#pragma once
class AbstractScreen{
	public:
		void applyInput(float);
		void getFocusedControl(void);
		void getNumberOfRenderPasses(void);
		void isModal(void);
		void isPauseScreen(void);
		void isShowingMenu(void);
		void isWorldViewer(void);
		void onGameEventNotification(UI::GameEventNotification);
		void renderOnlyWhenTopMost(void);
		void shouldStealMouse(void);
		void ~AbstractScreen();
		void ~AbstractScreen();
};
