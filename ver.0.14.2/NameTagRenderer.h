#pragma once
class NameTagRenderer{
	public:
		NameTagRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~NameTagRenderer();
		void ~NameTagRenderer();
};
