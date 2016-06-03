#pragma once
namespace j{
	class MobRenderer{
		public:
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void setupPosition(Entity &,Vec3 const&,Matrix &);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~MobRenderer();
	}
};
