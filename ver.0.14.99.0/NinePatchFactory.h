#pragma once
class NinePatchFactory{
	public:
		NinePatchFactory(mce::TextureGroup *,ResourceLocation const&);
		NinePatchFactory(mce::TextureGroup *,ResourceLocation const&);
		void createSymmetrical(IntRectangle const&,int,int,float,float);
		void createSymmetrical(IntRectangle const&,int,int,float,float);
		void createUniqueSymmetrical(IntRectangle const&,int,int,float,float);
		void createUniqueSymmetrical(IntRectangle const&,int,int,float,float);
};
