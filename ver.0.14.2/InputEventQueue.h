#pragma once
class InputEventQueue{
	public:
		InputEventQueue(void);
		void enqueueButton(short,ButtonState,bool);
		void enqueueButtonPressAndRelease(short);
		void enqueueCaretLocation(int);
		void enqueueDirection(DirectionId,float,float);
		void enqueuePointerLocation(InputMode,short,short);
		void enqueueTextChar(std::string,bool);
		void enqueueVector(short,float,float,float);
		void nextEvent(InputEvent &);
		void ~InputEventQueue();
};
