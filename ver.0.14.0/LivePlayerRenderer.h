#pragma once
class LivePlayerRenderer{
	public:
		LivePlayerRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~LivePlayerRenderer();
		void ~LivePlayerRenderer();
};
