#pragma once
class HumanoidMobRenderer{
	public:
		HumanoidMobRenderer(HumanoidModel *,float);
		void additionalRendering(Mob *,float);
		void render(Entity *,float,float,float,float,float);
		void renderHand(void);
		void ~HumanoidMobRenderer();
		void ~HumanoidMobRenderer();
};
