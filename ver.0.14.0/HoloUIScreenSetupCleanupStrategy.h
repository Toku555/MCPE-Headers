#pragma once
class HoloUIScreenSetupCleanupStrategy{
	public:
		HoloUIScreenSetupCleanupStrategy(MinecraftClient &);
		void _GenerateMatrixPatch(void);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~HoloUIScreenSetupCleanupStrategy();
		void ~HoloUIScreenSetupCleanupStrategy();
};
