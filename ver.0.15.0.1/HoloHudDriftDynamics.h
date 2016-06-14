#pragma once
class HoloHudDriftDynamics{
	public:
		HoloHudDriftDynamics(MinecraftClient &);
		HoloHudDriftDynamics(MinecraftClient &);
		void _adjustGazeToPoseDelta(Vec3 const&);
		void _generateOverlayPatch(void);
		void _generateOverlayPatch(void);
		void _updateDriftStateVector(void);
		void _updateDriftStateVector(void);
		void updateAndGenerateMatrixPatch(void);
		void updateAndGenerateMatrixPatch(void);
		void ~HoloHudDriftDynamics();
		void ~HoloHudDriftDynamics();
};
