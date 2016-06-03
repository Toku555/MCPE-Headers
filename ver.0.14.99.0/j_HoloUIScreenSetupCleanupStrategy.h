#pragma once
namespace j{
	class HoloUIScreenSetupCleanupStrategy{
		public:
		void cleanupScreen(ScreenContext &);
		void setupScreen(ScreenContext &);
		void ~HoloUIScreenSetupCleanupStrategy();
	}
};
