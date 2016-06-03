#pragma once
class RectangleArea{
	public:
		RectangleArea(float,float,float,float,bool);
		RectangleArea(float,float,float,float,bool);
		RectangleArea(void);
		RectangleArea(void);
		void centerX(void);
		void centerX(void);
		void centerY(void);
		void centerY(void);
		void clampToNorm(void);
		void clampToNorm(void);
		void grow(float);
		void grow(float);
		void grow(glm::detail::tvec2<float> const&);
		void grow(glm::detail::tvec2<float> const&);
		void isEmpty(void);
		void isEmpty(void);
		void isInside(float,float);
		void isInside(float,float);
		void operator=(RectangleArea const&);
		void operator=(RectangleArea const&);
		void resizeAroundCenter(float,float);
		void scale(float);
		void scale(float);
		void set(float,float,float,float);
		void set(float,float,float,float);
		void translate(float,float);
		void translate(float,float);
		void unionRects(RectangleArea const&);
		void unionRects(RectangleArea const&);
};
