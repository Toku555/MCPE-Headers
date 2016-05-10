#pragma once
class HudMobEffectsRenderer{
	public:
		HudMobEffectsRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudMobEffectsRenderer();
		void ~HudMobEffectsRenderer();
};
