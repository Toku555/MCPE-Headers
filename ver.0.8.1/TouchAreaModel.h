#pragma once
class TouchAreaModel{
	public:
		void addArea(int,IArea *);
		void clear(void);
		void getPointerId(MouseAction const&);
		void getPointerId(int,int,int);
		void ~TouchAreaModel();
		void ~TouchAreaModel();
};
