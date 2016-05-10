#pragma once
class HudExperienceRenderer{
	public:
		HudExperienceRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudExperienceRenderer();
		void ~HudExperienceRenderer();
};
