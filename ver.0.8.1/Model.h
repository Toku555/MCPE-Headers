#pragma once
class Model{
	public:
		Model(void);
		void clear(void);
		void onAppSuspended(void);
		void prepareMobModel(Mob *,float,float,float);
		void render(Entity *,float,float,float,float,float,float);
		void render(void);
		void renderHorrible(float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void ~Model();
		void ~Model();
};
