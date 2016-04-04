#pragma once
class ProgressBarRenderer{
	public:
		ProgressBarRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~ProgressBarRenderer();
		void ~ProgressBarRenderer();
};
