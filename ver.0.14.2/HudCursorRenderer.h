#pragma once
class HudCursorRenderer{
	public:
		HudCursorRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudCursorRenderer();
		void ~HudCursorRenderer();
};
