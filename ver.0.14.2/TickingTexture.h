#pragma once
class TickingTexture{
	public:
		TickingTexture(TextureUVCoordinateSet const&,int);
		void getPixels(void);
		void getReplicateValue(void);
		void getTextureUVCoordinateSet(void);
		void render(RenderGraphContext &);
		void ~TickingTexture();
		void ~TickingTexture();
};
