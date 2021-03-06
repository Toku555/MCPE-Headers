#pragma once
class HolographicPostRenderer{
	public:
		HolographicPostRenderer(void);
		HolographicPostRenderer(void);
		void InitStrategies(MinecraftClient &);
		void InitStrategies(MinecraftClient &);
		void _buildLevelMesh(void);
		void _buildLevelMesh(void);
		void _buildUIQuadMesh(void);
		void _buildUIQuadMesh(void);
		void _checkAndDrawHoloUIFrameAndCursor(MinecraftClient &);
		void _checkAndDrawHoloUIFrameAndCursor(MinecraftClient &);
		void _drawLevelQuad(MinecraftClient &);
		void _drawLevelQuad(MinecraftClient &);
		void _drawLivingRoom(MinecraftClient &);
		void _drawUIQuad(MinecraftClient &);
		void _drawUIQuad(MinecraftClient &);
		void _notTransitioningVR(MinecraftClient &);
		void _processAndRenderFadeScreenQuad(MinecraftClient &);
		void _processAndRenderFadeScreenQuad(MinecraftClient &);
		void _updateLevelMesh(MinecraftClient &);
		void _updateUIQuadMesh(MinecraftClient &);
		void clone(void);
		void clone(void);
		void onAppResumed(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void ~HolographicPostRenderer();
		void ~HolographicPostRenderer();
		void ~HolographicPostRenderer();
		void ~HolographicPostRenderer();
};
