#pragma once
class DefaultLevelDrawSetupCleanupStrategy{
	public:
		DefaultLevelDrawSetupCleanupStrategy(MinecraftClient &);
		void cleanupScreen(ushort);
		void setupScreen(ushort,float);
		void ~DefaultLevelDrawSetupCleanupStrategy();
		void ~DefaultLevelDrawSetupCleanupStrategy();
};
