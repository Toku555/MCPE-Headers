#pragma once
class BlockEntityRenderer{
	public:
		void _renderModel(Model &,mce::TexturePtr const&);
		void _renderModel(Model &,mce::TexturePtr const&,mce::MaterialPtr const&,mce::TexturePtr const&);
		void ~BlockEntityRenderer();
		void ~BlockEntityRenderer();
};
