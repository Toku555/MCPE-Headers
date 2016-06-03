#pragma once
class TextureUVCoordinateSet{
	public:
		TextureUVCoordinateSet(float,float,float,float,ushort,ushort,ResourceLocation);
		TextureUVCoordinateSet(float,float,float,float,ushort,ushort,ResourceLocation);
		TextureUVCoordinateSet(void);
		TextureUVCoordinateSet(void);
		void fromOldSystem(int);
		void fromOldSystem(int);
		void getFlippedHorizontal(void);
		void getFlippedHorizontal(void);
		void getFlippedVertically(void);
		void getFlippedVertically(void);
		void inverseOffsetHeight(float,float);
		void inverseOffsetHeight(float,float);
		void inverseOffsetWidth(float,float);
		void inverseOffsetWidth(float,float);
		void offset(float);
		void offsetHeight(float,float);
		void offsetHeight(float,float);
		void offsetHeightPixel(float,float);
		void offsetHeightPixel(float,float);
		void offsetWidth(float,float);
		void offsetWidth(float,float);
		void offsetWidthPixel(float,float);
		void offsetWidthPixel(float,float);
		void subTexture(float,float,int,int);
		void subTexture(float,float,int,int);
};
