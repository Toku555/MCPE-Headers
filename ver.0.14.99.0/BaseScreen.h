#pragma once
class BaseScreen{
	public:
		BaseScreen(void);
		BaseScreen(void);
		void cleanupForRendering(ScreenContext &);
		void cleanupForRendering(ScreenContext &);
		void getEyeRenderingMode(void);
		void getEyeRenderingMode(void);
		void getScreenName(void);
		void getScreenName(void);
		void setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>);
		void setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>);
		void setupForRendering(ScreenContext &);
		void setupForRendering(ScreenContext &);
		void toGUICoordinate(int,int,int &,int &);
		void toGUICoordinate(int,int,int &,int &);
		void ~BaseScreen();
		void ~BaseScreen();
		void ~BaseScreen();
		void ~BaseScreen();
};
