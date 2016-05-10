#pragma once
class TripodCameraRenderer{
	public:
		TripodCameraRenderer(mce::TextureGroup &);
		void _getOverlayColor(Entity &,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~TripodCameraRenderer();
		void ~TripodCameraRenderer();
};
