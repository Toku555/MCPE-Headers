#pragma once
namespace j{
	class ScreenSetupCleanupHelper{
		public:
		void cleanupFromVRDrawing(mce::WorldConstantsHolographic &);
		void setupForStandardUIDrawing(MinecraftClient &,mce::RenderContext &);
		void setupForVRDrawing(MinecraftClient &,mce::WorldConstantsHolographic &);
	}
};
