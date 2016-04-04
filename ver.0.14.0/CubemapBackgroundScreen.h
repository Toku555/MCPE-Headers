#pragma once
class CubemapBackgroundScreen{
	public:
		CubemapBackgroundScreen(MinecraftClient &);
		void _init(int,int);
		void renderOnlyWhenTopMost(void);
		void setupAndRender(UIRenderContext &,ushort,int,int,float);
		void ~CubemapBackgroundScreen();
		void ~CubemapBackgroundScreen();
};
