#pragma once
class TickingTexture{
	public:
		TickingTexture(TextureUVCoordinateSet const&,int);
		void bindTexture(TextureGroup &);
		void getGPUTexture(TextureGroup &);
		void getPixels(void);
		void getReplicateValue(void);
		void getTextureUVCoordinateSet(void);
		void ~TickingTexture();
		void ~TickingTexture();
};
