#pragma once
class HoloUIScreenSetupCleanupStrategy{
	public:
		HoloUIScreenSetupCleanupStrategy(MinecraftClient &);
		void _generateMatrixPatch(void);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloUIScreenSetupCleanupStrategy();
		void ~HoloUIScreenSetupCleanupStrategy();
};
