#pragma once
class HoloScreenSetupCleanupStrategy{
	public:
		HoloScreenSetupCleanupStrategy(MinecraftClient &);
		void _clearStereoTextureTarget(float);
		void _resetDrawToStereoTextureMode(void);
		void _setDrawToStereoTextureMode(void);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~HoloScreenSetupCleanupStrategy();
		void ~HoloScreenSetupCleanupStrategy();
};
