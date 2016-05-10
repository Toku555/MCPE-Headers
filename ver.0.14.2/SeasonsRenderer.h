#pragma once
class SeasonsRenderer{
	public:
		SeasonsRenderer(MinecraftClient *);
		void getTintedColor(Color const&);
		void tick(void);
		void updateTexture(void);
};
