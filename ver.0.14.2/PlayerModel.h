#pragma once
class PlayerModel{
	public:
		PlayerModel(GeometryPtr const&);
		void getLeftSleeve(void);
		void getRightSleeve(void);
		void render(Entity &,float,float,float,float,float,float);
		void renderGui(Entity *,float,bool);
		void setupAnim(float,float,float,float,float,float);
		void ~PlayerModel();
		void ~PlayerModel();
};
