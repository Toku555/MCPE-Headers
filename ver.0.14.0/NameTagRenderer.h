#pragma once
class NameTagRenderer{
	public:
		NameTagRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~NameTagRenderer();
		void ~NameTagRenderer();
};
