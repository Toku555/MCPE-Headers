#pragma once
class PaperDollRenderer{
	public:
		PaperDollRenderer(void);
		void _initialize(MinecraftClient &);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~PaperDollRenderer();
		void ~PaperDollRenderer();
};
