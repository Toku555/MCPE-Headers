#pragma once
class MouseHandler{
	public:
		MouseHandler(ITurnInput *);
		MouseHandler(void);
		void grab(void);
		void poll(void);
		void release(void);
		void setTurnInput(ITurnInput *);
		void ~MouseHandler();
};
