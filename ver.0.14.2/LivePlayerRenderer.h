#pragma once
class LivePlayerRenderer{
	public:
		LivePlayerRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~LivePlayerRenderer();
		void ~LivePlayerRenderer();
};
