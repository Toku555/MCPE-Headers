#pragma once
class WitchRenderer{
	public:
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~WitchRenderer();
		void ~WitchRenderer();
};
