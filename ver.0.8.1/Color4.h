#pragma once
class Color4{
	public:
		void clamp(void);
		void fromHSB(float,float,float);
		void lerp(Color4 const&,Color4 const&,float);
		void toARGB(void);
};
