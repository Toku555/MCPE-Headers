#pragma once
class HoloRealitySetupCleanupStrategy{
	public:
		HoloRealitySetupCleanupStrategy(MinecraftClient &);
		void _GenerateMatrixPatch(void);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~HoloRealitySetupCleanupStrategy();
		void ~HoloRealitySetupCleanupStrategy();
};
