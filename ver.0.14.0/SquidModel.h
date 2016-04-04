#pragma once
class SquidModel{
	public:
		SquidModel(GeometryPtr const&);
		void render(Entity &,float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void ~SquidModel();
		void ~SquidModel();
};