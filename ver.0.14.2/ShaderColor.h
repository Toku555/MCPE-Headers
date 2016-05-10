#pragma once
class ShaderColor{
	public:
		void getColor(void);
		void isDirty(void);
		void makeClean(void);
		void setColor(Color const&);
};
