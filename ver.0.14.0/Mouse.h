#pragma once
class Mouse{
	public:
		void feed(char,char,short,short);
		void feed(char,char,short,short,short,short);
		void feedRelative(char,char,short,short);
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
};
