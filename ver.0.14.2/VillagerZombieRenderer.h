#pragma once
class VillagerZombieRenderer{
	public:
		VillagerZombieRenderer(mce::TextureGroup &,GeometryPtr const&,GeometryPtr const&,GeometryPtr const&,float);
		void render(Entity &,Vec3 const&,float,float);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~VillagerZombieRenderer();
		void ~VillagerZombieRenderer();
};
