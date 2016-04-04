#pragma once
class HolosceneRenderer{
	public:
		HolosceneRenderer(MinecraftClient *);
		void getLevelHeightOffset(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void renderFence_Iconograph(void);
		void renderFence_Level(void);
		void renderFrame_Iconograph(void);
		void renderFrame_Level(Matrix);
		void renderHoloUICursor(void);
		void renderInnerSkirt_Level(void);
		void renderOuterSkirt_Level(void);
		void renderSkirt_Iconograph(void);
		void renderSurfaceIcon(void);
		void renderSurfaces(void);
		void renderTable_Iconograph(void);
		void renderTable_Level(void);
		void startReveal(void);
		void tick(void);
		void ~HolosceneRenderer();
		void ~HolosceneRenderer();
};
