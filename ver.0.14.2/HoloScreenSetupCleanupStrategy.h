#pragma once
class HoloScreenSetupCleanupStrategy{
	public:
		HoloScreenSetupCleanupStrategy(MinecraftClient &);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloScreenSetupCleanupStrategy();
		void ~HoloScreenSetupCleanupStrategy();
};
