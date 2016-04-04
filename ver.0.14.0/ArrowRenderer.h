#pragma once
class ArrowRenderer{
	public:
		ArrowRenderer(TextureGroup &);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void ~ArrowRenderer();
		void ~ArrowRenderer();
};
