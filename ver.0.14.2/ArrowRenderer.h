#pragma once
class ArrowRenderer{
	public:
		ArrowRenderer(mce::TextureGroup &);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void ~ArrowRenderer();
		void ~ArrowRenderer();
};
