#pragma once
class Slider{
	public:
		Slider(MinecraftClient &,Options::Option const*,float,float);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void processControllerInput(MinecraftClient *,int);
		void render(MinecraftClient *,int,int);
		void setOption(MinecraftClient *);
		void tick(MinecraftClient *);
		void updateStepPercentage(void);
		void ~Slider();
		void ~Slider();
};
