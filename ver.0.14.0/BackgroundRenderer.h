#pragma once
class BackgroundRenderer{
	public:
		BackgroundRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~BackgroundRenderer();
		void ~BackgroundRenderer();
};
