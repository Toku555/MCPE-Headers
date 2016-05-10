#pragma once
class BoatRenderer{
	public:
		BoatRenderer(mce::TextureGroup &);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void renderWaterHole(Entity &,Vec3 const&,Vec2 const&,float);
		void ~BoatRenderer();
		void ~BoatRenderer();
};
