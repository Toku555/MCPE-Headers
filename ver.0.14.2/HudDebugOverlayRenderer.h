#pragma once
class HudDebugOverlayRenderer{
	public:
		HudDebugOverlayRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudDebugOverlayRenderer();
		void ~HudDebugOverlayRenderer();
};
