#pragma once
class DefaultUIScreenSetupCleanupStrategy{
	public:
		DefaultUIScreenSetupCleanupStrategy(MinecraftClient &);
		void clearScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~DefaultUIScreenSetupCleanupStrategy();
		void ~DefaultUIScreenSetupCleanupStrategy();
};
