#pragma once
class Controller{
	public:
		void feed(int,int,float,float);
		void getTransformedX(int,float,float,bool);
		void getTransformedY(int,float,float,bool);
		void getX(int);
		void getY(int);
		void isTouched(int);
		void isValidStick(int);
		void linearTransform(float,float,float,bool);
};
