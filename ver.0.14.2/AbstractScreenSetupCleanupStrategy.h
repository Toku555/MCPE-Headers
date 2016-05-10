#pragma once
class AbstractScreenSetupCleanupStrategy{
	public:
		void cleanupScreen(ScreenContext &);
		void getNumberOfRenderPasses(void);
		void setupScreen(ScreenContext &);
		void ~AbstractScreenSetupCleanupStrategy();
		void ~AbstractScreenSetupCleanupStrategy();
};
