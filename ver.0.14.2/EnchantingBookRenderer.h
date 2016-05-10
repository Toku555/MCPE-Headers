#pragma once
class EnchantingBookRenderer{
	public:
		EnchantingBookRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~EnchantingBookRenderer();
		void ~EnchantingBookRenderer();
};
