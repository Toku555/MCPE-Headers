#pragma once
class MouseDevice{
	public:
		MouseDevice(void);
		void feed(char,char,short,short);
		void feed(char,char,short,short,short,short);
		void getButtonState(int);
		void getDX(void);
		void getDY(void);
		void getEvent(void);
		void getEventButton(void);
		void getEventButtonState(void);
		void getX(void);
		void getY(void);
		void isButtonDown(int);
		void next(void);
		void reset(void);
		void reset2(void);
		void rewind(void);
		void wasFirstMovement(void);
		void ~MouseDevice();
};
