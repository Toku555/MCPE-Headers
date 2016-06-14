#pragma once
class ScreenSetupCleanupHelper{
	public:
		void cleanupFromVRDrawing(mce::WorldConstantsHolographic &);
		void cleanupFromVRDrawing(mce::WorldConstantsHolographic &);
		void computeGazeToHeadLockedRotation(MinecraftClient &,Vec3 &,float,float);
		void computeGazeToHeadLockedRotation(MinecraftClient &,Vec3 &,float,float);
		void setupForStandardUIDrawing(MinecraftClient &,mce::RenderContext &);
		void setupForStandardUIDrawing(MinecraftClient &,mce::RenderContext &);
		void setupForVRDrawing(MinecraftClient &,mce::WorldConstantsHolographic &);
		void setupForVRDrawing(MinecraftClient &,mce::WorldConstantsHolographic &);
};
