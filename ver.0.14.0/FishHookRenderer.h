#pragma once
class FishHookRenderer{
	public:
		FishHookRenderer(TextureGroup &);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void ~FishHookRenderer();
		void ~FishHookRenderer();
};
