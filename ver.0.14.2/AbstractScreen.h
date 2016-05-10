#pragma once
class AbstractScreen{
	public:
		void _handleDirtyVisualTree(void);
		void applyInput(float);
		void drawRectangleArea(Tessellator &,RectangleArea const&,int,int,float,float);
		void getEyeRenderingMode(void);
		void getFocusedControl(void);
		void getNumberOfRenderPasses(void);
		void getScreenName(void);
		void getSendTelemetry(void);
		void ignoreAsTop(void);
		void isModal(void);
		void isPauseScreen(void);
		void isShowingMenu(void);
		void isWorldViewer(void);
		void onGameEventNotification(ui::GameEventNotification);
		void renderOnlyWhenTopMost(void);
		void screenDrawsLast(void);
		void screenIsNotFlushable(void);
		void setupAndRender(UIScreenContext &);
		void shouldStealMouse(void);
		void ~AbstractScreen();
		void ~AbstractScreen();
};
