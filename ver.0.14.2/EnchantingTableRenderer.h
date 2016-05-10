#pragma once
class EnchantingTableRenderer{
	public:
		EnchantingTableRenderer(mce::TextureGroup &);
		void render(BlockSource &,BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void ~EnchantingTableRenderer();
		void ~EnchantingTableRenderer();
};
