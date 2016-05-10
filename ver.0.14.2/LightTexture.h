#pragma once
class LightTexture{
	public:
		LightTexture(TextureData &);
		void getColorForUV(BrightnessPair);
		void refresh(LightTextureData const&,float,float);
};
