#pragma once
class MenuGamePad{
	public:
		void _getXDirection(int,float);
		void _getYDirection(int,float);
		void _isValidStick(int);
		void getDirection(int);
		void getX(int);
		void getY(int);
		void isTouched(int);
		void setX(int,float);
		void setY(int,float);
};
