#pragma once
class WaterTexture{
	public:
		WaterTexture(TextureUVCoordinateSet const&,int,bool);
		void _renderWater(int);
		void tick(void);
		void ~WaterTexture();
		void ~WaterTexture();
};
