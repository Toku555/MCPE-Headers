#pragma once
class BaseScreen{
	public:
		BaseScreen(void);
		void cleanupForRendering(ushort);
		void setScreenSetupCleanup(std::unique_ptr<AbstractScreenSetupCleanupStrategy,std::default_delete<AbstractScreenSetupCleanupStrategy>>);
		void setupForRendering(ushort,float);
		void toGUICoordinate(int,int,int &,int &);
		void ~BaseScreen();
		void ~BaseScreen();
};
