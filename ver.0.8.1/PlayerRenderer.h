#pragma once
class PlayerRenderer{
	public:
		PlayerRenderer(HumanoidModel *,float);
		void getArmorTransparencyMode(void);
		void prepareArmor(Mob *,int,float);
		void renderName(Entity *,float);
		void setupPosition(Entity *,float,float,float);
		void setupRotations(Entity *,float,float,float);
		void ~PlayerRenderer();
		void ~PlayerRenderer();
};
