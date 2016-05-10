#pragma once
class RabbitModel{
	public:
		RabbitModel(void);
		void prepareMobModel(Mob &,float,float,float);
		void render(Entity &,float,float,float,float,float,float);
		void setRotation(ModelPart &,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void ~RabbitModel();
		void ~RabbitModel();
};
