#pragma once
class DefaultMonoscopicScreenSetupCleanupStrategy{
	public:
		DefaultMonoscopicScreenSetupCleanupStrategy(MinecraftClient &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~DefaultMonoscopicScreenSetupCleanupStrategy();
		void ~DefaultMonoscopicScreenSetupCleanupStrategy();
};
