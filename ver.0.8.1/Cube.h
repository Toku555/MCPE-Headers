#pragma once
class Cube{
	public:
		Cube(ModelPart *,int,int,float,float,float,int,int,int,float);
		void compile(Tesselator &,float);
		void setId(std::string const&);
};
