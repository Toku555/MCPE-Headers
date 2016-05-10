#pragma once
class GameRenderer{
	public:
		GameRenderer(MinecraftClient *);
		void _adjustVRRotationActual(void);
		void _checkAndDrawInputUI(void);
		void _computeRealityAugmentationMatrix(Matrix &);
		void _computeViewForSleeping(void);
		void _prepHoloTransforms(float,bool);
		void _tickLightTexture(Dimension const&,float);
		void adjustVRRotationSmoothTurningMode(float);
		void clearRenderTarget(RenderGraphContext &,MinecraftClient &);
		void computeTransitionScreenMat(void);
		void createRenderGraph(void);
		void getHoloLevelWidthHeight(float &,float &);
		void getHoloUIWidthHeight(float &,float &);
		void getIncompleteScreenContext(void);
		void recenterHoloUI(void);
		void renderCursor(float,float);
		void renderDebugScreen(void);
		void setLevel(Level *,Dimension *);
		void tick(void);
		void updatePointerLocation(short,short);
		void ~GameRenderer();
		void ~GameRenderer();
};
