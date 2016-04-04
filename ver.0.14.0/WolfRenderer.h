#pragma once
class WolfRenderer{
	public:
		WolfRenderer(TextureGroup &,GeometryPtr const&);
		void getBob(Mob &,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~WolfRenderer();
		void ~WolfRenderer();
};
