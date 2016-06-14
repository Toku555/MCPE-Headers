#pragma once
class Slider{
	public:
		Slider(MinecraftClient &,Options::Option const*,float,float);
		Slider(MinecraftClient &,Options::Option const*,float,float);
		Slider(MinecraftClient &,Options::Option const*,std::vector<int,std::allocator<int>> const&);
		Slider(MinecraftClient &,Options::Option const*,std::vector<int,std::allocator<int>> const&);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void processControllerInput(MinecraftClient *,int);
		void processControllerInput(MinecraftClient *,int);
		void render(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void setOption(MinecraftClient *);
		void setOption(MinecraftClient *);
		void tick(MinecraftClient *);
		void tick(MinecraftClient *);
		void updateStepPercentage(void);
		void ~Slider();
		void ~Slider();
		void ~Slider();
		void ~Slider();
};
