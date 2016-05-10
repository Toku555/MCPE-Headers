#pragma once
class SplashTextRenderer{
	public:
		SplashTextRenderer(void);
		void _loadSplashes(std::string const&);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~SplashTextRenderer();
		void ~SplashTextRenderer();
};
