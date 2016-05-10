#pragma once
class PaperDollRenderer{
	public:
		PaperDollRenderer(void);
		void _initialize(MinecraftClient &);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~PaperDollRenderer();
		void ~PaperDollRenderer();
};
