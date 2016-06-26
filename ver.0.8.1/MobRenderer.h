#pragma once
class MobRenderer{
	public:
		MobRenderer(Model *,float);
		void _renderColorOverlay(Mob *,Color4 const&,float);
		void additionalRendering(Mob *,float);
		void getArmor(void);
		void getArmorTransparencyMode(void);
		void getAttackAnim(Mob *,float);
		void getBob(Mob *,float);
		void getFlipDegrees(Mob *);
		void getOverlayColor(Mob *,float,float);
		void prepareArmor(Mob *,int,float);
		void render(Entity *,float,float,float,float,float);
		void scale(Mob *,float);
		void setArmor(Model *);
		void setupPosition(Entity *,float,float,float);
		void setupRotations(Entity *,float,float,float);
		void ~MobRenderer();
		void ~MobRenderer();
};
