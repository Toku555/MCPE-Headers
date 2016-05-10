#pragma once
class HoloRealitySetupCleanupStrategy{
	public:
		HoloRealitySetupCleanupStrategy(MinecraftClient &);
		void _adjustProjMat(Matrix &,glm::detail::tvec4<float> const&);
		void _generateMatrixPatch(void);
		void adjustProjectionMatrixForRealityMode(Matrix &,Matrix &);
		void cleanupScreen(ScreenContext &);
		void getEyeRenderingMode(void);
		void setupScreen(ScreenContext &);
		void ~HoloRealitySetupCleanupStrategy();
		void ~HoloRealitySetupCleanupStrategy();
};
