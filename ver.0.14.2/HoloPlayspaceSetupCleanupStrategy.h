#pragma once
class HoloPlayspaceSetupCleanupStrategy{
	public:
		HoloPlayspaceSetupCleanupStrategy(MinecraftClient &);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloPlayspaceSetupCleanupStrategy();
		void ~HoloPlayspaceSetupCleanupStrategy();
};
