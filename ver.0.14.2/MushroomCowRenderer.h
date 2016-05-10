#pragma once
class MushroomCowRenderer{
	public:
		MushroomCowRenderer(mce::TextureGroup &,BlockTessellator &,std::unique_ptr<QuadrupedModel,std::default_delete<QuadrupedModel>>,float);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void ~MushroomCowRenderer();
		void ~MushroomCowRenderer();
};
