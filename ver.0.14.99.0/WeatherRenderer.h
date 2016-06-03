#pragma once
class WeatherRenderer{
	public:
		WeatherRenderer(MinecraftClient *);
		WeatherRenderer(MinecraftClient *);
		void _init(void);
		void _init(void);
		void getFogLevel(void);
		void getPrecipitationAmount(WeatherRenderer::PrecipitationType,float);
		void onAppResumed(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void render(float);
		void render(float);
		void setConstants(float);
		void setPassConstants(WeatherRenderer::PrecipitationType,int,float);
		void setPassConstants(WeatherRenderer::PrecipitationType,int,float);
		void tick(BlockSource &,float);
		void tick(BlockSource &,float);
		void updatePrecipitation(float,BlockPos const&);
		void updatePrecipitation(float,BlockPos const&);
		void ~WeatherRenderer();
		void ~WeatherRenderer();
		void ~WeatherRenderer();
		void ~WeatherRenderer();
};
