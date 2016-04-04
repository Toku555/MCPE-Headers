#pragma once
class OcelotRenderer{
	public:
		OcelotRenderer(TextureGroup &,GeometryPtr const&);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~OcelotRenderer();
		void ~OcelotRenderer();
};
