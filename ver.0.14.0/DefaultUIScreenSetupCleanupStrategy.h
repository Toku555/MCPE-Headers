#pragma once
class DefaultUIScreenSetupCleanupStrategy{
	public:
		DefaultUIScreenSetupCleanupStrategy(MinecraftClient &);
		void cleanupScreen(ushort);
		void clearScreen(void);
		void setupScreen(ushort,float);
		void ~DefaultUIScreenSetupCleanupStrategy();
		void ~DefaultUIScreenSetupCleanupStrategy();
};
