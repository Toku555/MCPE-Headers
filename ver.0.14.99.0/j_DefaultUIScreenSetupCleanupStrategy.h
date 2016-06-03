#pragma once
namespace j{
	class DefaultUIScreenSetupCleanupStrategy{
		public:
		void clearScreen(ScreenContext &);
		void ~DefaultUIScreenSetupCleanupStrategy();
	}
};
