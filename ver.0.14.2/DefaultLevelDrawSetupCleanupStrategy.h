#pragma once
class DefaultLevelDrawSetupCleanupStrategy{
	public:
		DefaultLevelDrawSetupCleanupStrategy(MinecraftClient &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~DefaultLevelDrawSetupCleanupStrategy();
		void ~DefaultLevelDrawSetupCleanupStrategy();
};
