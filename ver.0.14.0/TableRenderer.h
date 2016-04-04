#pragma once
class TableRenderer{
	public:
		TableRenderer(void);
		void init(MinecraftClient *);
		void render(float);
		void tick(void);
		void ~TableRenderer();
};
