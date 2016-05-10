#pragma once
class ControllerButtonCoordinates{
	public:
		ControllerButtonCoordinates(void);
		void fill(int,int,int,int,int,int);
		void getH(void);
		void getSH(void);
		void getSW(void);
		void getSX(void);
		void getSY(void);
		void getW(void);
		void ~ControllerButtonCoordinates();
};
