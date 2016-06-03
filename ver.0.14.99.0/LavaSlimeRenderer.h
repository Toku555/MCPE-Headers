#pragma once
class LavaSlimeRenderer{
	public:
		LavaSlimeRenderer(mce::TextureGroup &);
		LavaSlimeRenderer(mce::TextureGroup &);
		LavaSlimeRenderer(mce::TextureGroup &,std::unique_ptr<LavaSlimeModel,std::default_delete<LavaSlimeModel>>);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~LavaSlimeRenderer();
		void ~LavaSlimeRenderer();
};
