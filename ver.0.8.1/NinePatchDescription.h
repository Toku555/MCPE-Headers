#pragma once
class NinePatchDescription{
	public:
		NinePatchDescription(float,float,float,float,float,float,float,float,float,float,float,float);
		void createSymmetrical(int,int,IntRectangle const&,int,int);
		void transformUVForImage(TextureData const&);
		void transformUVForImageSize(int,int);
};
