#pragma once
class Model{
	public:
		Model(void);
		void buildAABB(void);
		void clear(void);
		void copyModelPart(ModelPart const&,ModelPart&);
		void onAppSuspended(void);
		void prepareMobModel(Mob &,float,float,float);
		void registerParts(ModelPart &);
		void render(Entity &,float,float,float,float,float,float);
		void render(void);
		void setupAnim(float,float,float,float,float,float);
		void ~Model();
		void ~Model();
};
