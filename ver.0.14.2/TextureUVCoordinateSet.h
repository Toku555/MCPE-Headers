#pragma once
class TextureUVCoordinateSet{
	public:
		TextureUVCoordinateSet(float,float,float,float,ushort,ushort,TextureFile);
		TextureUVCoordinateSet(void);
		void fromOldSystem(int);
		void inverseOffsetHeight(float,float);
		void inverseOffsetWidth(float,float);
		void offset(float);
		void offsetHeight(float,float);
		void offsetHeightPixel(float,float);
		void offsetWidth(float,float);
		void offsetWidthPixel(float,float);
		void pixelHeight(void);
		void pixelWidth(void);
		void subTexture(float,float,int,int);
};
