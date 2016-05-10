#pragma once
class Multitouch{
	public:
		void commit(void);
		void feed(char,char,short,short,int);
		void getActivePointerIds(int const**);
		void getActivePointerIdsThisUpdate(int const**);
		void getFirstActivePointerIdEx(void);
		void getFirstActivePointerIdExThisUpdate(void);
		void isEdgeTouch(int);
		void isPointerDown(int);
		void isPressed(int);
		void isPressedThisUpdate(int);
		void isReleased(int);
		void isReleasedThisUpdate(int);
		void next(void);
		void reset(void);
		void resetThisUpdate(void);
};
