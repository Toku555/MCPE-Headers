#pragma once
class HotBarRenderer{
	public:
		HotBarRenderer(void);
		void _renderDropProgress(MinecraftClient &);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HotBarRenderer();
		void ~HotBarRenderer();
};
