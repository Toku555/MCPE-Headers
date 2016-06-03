#pragma once
namespace j{
	class Tessellator{
		public:
		void color(Color const&);
		void draw(mce::MaterialPtr const&);
		void draw(mce::MaterialPtr const&,mce::TexturePtr const&);
		void draw(mce::MaterialPtr const&,mce::TexturePtr const&);
		void tex1(Vec2 const&);
		void triangle(uint,uint,uint);
		void trim(void);
		void vertex(float,float,float);
	}
};
