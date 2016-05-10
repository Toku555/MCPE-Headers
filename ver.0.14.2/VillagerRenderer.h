#pragma once
class VillagerRenderer{
	public:
		VillagerRenderer(mce::TextureGroup &,GeometryPtr const&);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~VillagerRenderer();
		void ~VillagerRenderer();
};
