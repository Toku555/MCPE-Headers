#pragma once
class ChickenRenderer{
	public:
		ChickenRenderer(TextureGroup &,std::unique_ptr<Model,std::default_delete<Model>>,float);
		void getBob(Mob &,float);
		void ~ChickenRenderer();
		void ~ChickenRenderer();
};
