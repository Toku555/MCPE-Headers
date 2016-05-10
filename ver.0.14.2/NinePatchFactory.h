#pragma once
class NinePatchFactory{
	public:
		NinePatchFactory(mce::TextureGroup *,std::string const&);
		void createSymmetrical(IntRectangle const&,int,int,float,float);
		void createUniqueSymmetrical(IntRectangle const&,int,int,float,float);
};
