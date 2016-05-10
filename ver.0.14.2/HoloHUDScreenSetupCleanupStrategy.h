#pragma once
class HoloHUDScreenSetupCleanupStrategy{
	public:
		HoloHUDScreenSetupCleanupStrategy(MinecraftClient &);
		void _adjustGazeToPoseDelta(Vec3 const&);
		void _generateMatrixPatch(void);
		void _generateOverlayPatch(void);
		void _updateDriftStateVector(void);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloHUDScreenSetupCleanupStrategy();
		void ~HoloHUDScreenSetupCleanupStrategy();
};
