#pragma once
class MovingBlockEntityRenderer{
	public:
		MovingBlockEntityRenderer(mce::TextureGroup &,BlockTessellator &);
		MovingBlockEntityRenderer(mce::TextureGroup &,BlockTessellator &);
		void render(BlockSource &,BlockEntity &,Vec3 const&,uchar,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void render(BlockSource &,BlockEntity &,Vec3 const&,uchar,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void ~MovingBlockEntityRenderer();
		void ~MovingBlockEntityRenderer();
		void ~MovingBlockEntityRenderer();
		void ~MovingBlockEntityRenderer();
};
