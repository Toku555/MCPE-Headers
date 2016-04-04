#pragma once
class LightTexture{
	public:
		LightTexture(TextureData &);
		void getColorForUV(uint);
		void refresh(LightTextureData const&,float,float);
};
