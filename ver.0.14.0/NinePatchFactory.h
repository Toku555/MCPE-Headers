#pragma once
class NinePatchFactory{
	public:
		NinePatchFactory(TextureGroup *,std::string const&);
		void createSymmetrical(IntRectangle const&,int,int,float,float);
		void createUniqueSymmetrical(IntRectangle const&,int,int,float,float);
};
