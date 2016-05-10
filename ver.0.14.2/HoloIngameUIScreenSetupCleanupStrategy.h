#pragma once
class HoloIngameUIScreenSetupCleanupStrategy{
	public:
		HoloIngameUIScreenSetupCleanupStrategy(MinecraftClient &);
		void _generateMatrixPatch(void);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloIngameUIScreenSetupCleanupStrategy();
		void ~HoloIngameUIScreenSetupCleanupStrategy();
};
