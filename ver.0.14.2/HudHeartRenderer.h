#pragma once
class HudHeartRenderer{
	public:
		HudHeartRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~HudHeartRenderer();
		void ~HudHeartRenderer();
};
