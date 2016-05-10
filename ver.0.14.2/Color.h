#pragma once
class Color{
	public:
		void bilinear(Color const&,Color const&,Color const&,Color const&,float,float);
		void fromHSB(float,float,float);
		void toABGR(void);
		void toARGB(void);
};
