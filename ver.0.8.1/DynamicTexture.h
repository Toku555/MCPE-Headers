#pragma once
class DynamicTexture{
	public:
		DynamicTexture(TextureUVCoordinateSet const&,int);
		void bindTexture(Textures *);
		void ~DynamicTexture();
		void ~DynamicTexture();
};
