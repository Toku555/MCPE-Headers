#pragma once
class NinePatchFactory{
	public:
		NinePatchFactory(Textures *,std::string const&);
		void createSymmetrical(IntRectangle const&,int,int,float,float);
};
