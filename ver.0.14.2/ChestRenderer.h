#pragma once
class ChestRenderer{
	public:
		ChestRenderer(mce::TextureGroup &);
		void render(BlockSource &,BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void ~ChestRenderer();
		void ~ChestRenderer();
};
