#pragma once
class SkullBlockRenderer{
	public:
		SkullBlockRenderer(TextureGroup &);
		void getTextureForSkullType(SkullBlockEntity::SkullType);
		void render(BlockSource &,BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void renderSkull(Vec3 const&,int,float,SkullBlockEntity::SkullType,float,mce::MaterialPtr const*,mce::TexturePtr const*,int);
		void ~SkullBlockRenderer();
		void ~SkullBlockRenderer();
};
