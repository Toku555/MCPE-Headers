#pragma once
class TripodCameraRenderer{
	public:
		TripodCameraRenderer(TextureGroup &);
		void _getOverlayColor(Entity &,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~TripodCameraRenderer();
		void ~TripodCameraRenderer();
};
