#pragma once
class FenceRenderer{
	public:
		FenceRenderer(void);
		void init(float,MinecraftClient *);
		void render(bool,float);
		void ~FenceRenderer();
};
