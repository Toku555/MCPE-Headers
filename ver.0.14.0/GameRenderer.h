#pragma once
class GameRenderer{
	public:
		GameRenderer(MinecraftClient *);
		void _checkAndDrawHoloUIFrameAndCursor(void);
		void _cleanupForFrame(void);
		void _computeRealityAugmentationMatrix(Matrix &);
		void _prepHoloTransforms(void);
		void _setupForFrame(void);
		void _tickLightTexture(Dimension const&,float);
		void getHoloUIWidthHeight(float &,float &);
		void setLevel(Level *,Dimension *);
		void tick(void);
		void updatePointerLocation(short,short);
		void ~GameRenderer();
};
