#pragma once
class SignRenderer{
	public:
		SignRenderer(mce::TextureGroup &,Font &);
		void _renderText(BlockEntity &,float);
		void render(BlockSource &,BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void ~SignRenderer();
		void ~SignRenderer();
};
