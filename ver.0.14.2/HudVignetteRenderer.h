#pragma once
class HudVignetteRenderer{
	public:
		HudVignetteRenderer(void);
		void _renderVignette(MinecraftClient &,float,int,int);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudVignetteRenderer();
		void ~HudVignetteRenderer();
};
