#pragma once
class DefaultHUDScreenSetupCleanupStrategy{
	public:
		DefaultHUDScreenSetupCleanupStrategy(MinecraftClient &);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~DefaultHUDScreenSetupCleanupStrategy();
		void ~DefaultHUDScreenSetupCleanupStrategy();
};
