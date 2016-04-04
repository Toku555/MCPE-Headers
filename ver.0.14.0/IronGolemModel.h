#pragma once
class IronGolemModel{
	public:
		IronGolemModel(GeometryPtr const&);
		void prepareMobModel(Mob &,float,float,float);
		void render(Entity &,float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void triangleWave(float,float);
		void ~IronGolemModel();
		void ~IronGolemModel();
};
