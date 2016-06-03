#pragma once
namespace j{
	class NinePatchLayer{
		public:
		void buildQuad(int);
		void draw(Tessellator &,float,float);
		void setSize(float,float);
	}
};
