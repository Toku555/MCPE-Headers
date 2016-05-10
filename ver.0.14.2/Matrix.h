#pragma once
class Matrix{
	public:
		void invert(void);
		void rotate(float,Vec3 const&);
		void scale(Vec3 const&);
		void setOrtho(float,float,float,float,float,float);
		void setPerspective(float,float,float,float);
		void transform3(Vec3 &);
		void transform3(Vec3 &,float &);
		void translate(Vec3 const&);
};
