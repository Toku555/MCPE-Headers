#pragma once
class RectangleArea{
	public:
		RectangleArea(float,float,float,float);
		RectangleArea(void);
		void centerX(void);
		void centerY(void);
		void grow(float);
		void grow(glm::detail::tvec2<float> const&);
		void isEmpty(void);
		void isInside(float,float);
		void resizeAroundCenter(float,float);
		void scale(float);
		void translate(float,float);
};
