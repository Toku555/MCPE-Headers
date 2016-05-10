#pragma once
class HolosceneRenderer{
	public:
		HolosceneRenderer(MinecraftClient *,float);
		void _buildGazeIconMesh(void);
		void _buildHoloScreenFrame(void);
		void _buildHoloScreenLivingRoomAndTable(void);
		void _computeAlphaFromHintCycles(void);
		void _drawCrosshairMeshes(mce::Mesh &,mce::Mesh &,float,float,HolosceneRenderer::InWorldCursorMode);
		void _getPreciseHitPointNorm(Vec3 &,Vec3 &,HitResult const&,Vec3);
		void _initResources(void);
		void _prepCrosshairMeshes(float,float,Vec3,Vec3,Vec3,Vec3,mce::Mesh &,mce::Mesh &,bool,bool);
		void _renderLivingRoomHintText(void);
		void getLevelHeightOffset(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void renderFence_Iconograph(void);
		void renderFence_Level(void);
		void renderFrame_Iconograph(void);
		void renderFrame_Level(float,Matrix);
		void renderHoloUICursor(bool);
		void renderInWorldHoloCursor(HolographicPlatform::HoloCursorWorldParams const&);
		void renderInnerSkirt_Level(void);
		void renderLivingRoom(void);
		void renderOuterSkirt_Level(void);
		void renderRedHitEffect(float);
		void renderSkirt_Iconograph(void);
		void renderSurfaceIcon(void);
		void renderSurfaces(void);
		void renderTable_Iconograph(void);
		void renderTable_Level(void);
		void resetLivingRoomHintText(std::string const&,Color const&,int);
		void startReveal(void);
		void tick(void);
		void ~HolosceneRenderer();
		void ~HolosceneRenderer();
};
