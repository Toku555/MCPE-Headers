#pragma once
class HoloViewerSetupCleanupStrategy{
	public:
		HoloViewerSetupCleanupStrategy(MinecraftClient &);
		void _generateMatrixPatch(void);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloViewerSetupCleanupStrategy();
		void ~HoloViewerSetupCleanupStrategy();
};
