#pragma once
class HudBubblesRenderer{
	public:
		HudBubblesRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudBubblesRenderer();
		void ~HudBubblesRenderer();
};
