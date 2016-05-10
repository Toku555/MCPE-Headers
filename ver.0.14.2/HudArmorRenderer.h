#pragma once
class HudArmorRenderer{
	public:
		HudArmorRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudArmorRenderer();
		void ~HudArmorRenderer();
};
