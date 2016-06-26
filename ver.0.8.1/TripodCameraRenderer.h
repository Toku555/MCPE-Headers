#pragma once
class TripodCameraRenderer{
	public:
		TripodCameraRenderer(void);
		void getFlashTime(TripodCamera const*,float);
		void render(Entity *,float,float,float,float,float);
		void ~TripodCameraRenderer();
		void ~TripodCameraRenderer();
};
