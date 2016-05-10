#pragma once
class HudHungerRenderer{
	public:
		HudHungerRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~HudHungerRenderer();
		void ~HudHungerRenderer();
};
