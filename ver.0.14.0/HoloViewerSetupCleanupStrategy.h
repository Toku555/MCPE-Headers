#pragma once
class HoloViewerSetupCleanupStrategy{
	public:
		HoloViewerSetupCleanupStrategy(MinecraftClient &);
		void _GenerateMatrixPatch(void);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~HoloViewerSetupCleanupStrategy();
		void ~HoloViewerSetupCleanupStrategy();
};
