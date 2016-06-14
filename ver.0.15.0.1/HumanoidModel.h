#pragma once
class HumanoidModel{
	public:
		HumanoidModel(GeometryPtr const&);
		HumanoidModel(GeometryPtr const&);
		HumanoidModel(float,float,int,int);
		HumanoidModel(float,float,int,int);
		HumanoidModel(float,float,int,int);
		void prepareMobModel(Mob &,float,float,float);
		void prepareMobModel(Mob &,float,float,float);
		void render(Entity &,float,float,float,float,float,float);
		void render(Entity &,float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void ~HumanoidModel();
		void ~HumanoidModel();
		void ~HumanoidModel();
		void ~HumanoidModel();
};
