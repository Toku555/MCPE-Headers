#pragma once
class ProgressBar{
	public:
		ProgressBar(MinecraftClient &,Color const&);
		void tick(MinecraftClient *);
		void updateText(void);
		void ~ProgressBar();
		void ~ProgressBar();
};
