#pragma once
class BaseScreen{
	public:
		BaseScreen(void);
		void cleanupForRendering(ScreenContext &);
		void getEyeRenderingMode(void);
		void getScreenName(void);
		void setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>);
		void setupForRendering(ScreenContext &);
		void toGUICoordinate(int,int,int &,int &);
		void ~BaseScreen();
		void ~BaseScreen();
};
