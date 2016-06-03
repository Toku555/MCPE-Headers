#pragma once
class InputEventQueue{
	public:
		InputEventQueue(void);
		InputEventQueue(void);
		void enqueueButton(short,ButtonState,bool);
		void enqueueButton(short,ButtonState,bool);
		void enqueueButtonPressAndRelease(short);
		void enqueueButtonPressAndRelease(short);
		void enqueueCaretLocation(int);
		void enqueueCaretLocation(int);
		void enqueueDirection(DirectionId,float,float);
		void enqueueDirection(DirectionId,float,float);
		void enqueuePointerLocation(InputMode,short,short);
		void enqueuePointerLocation(InputMode,short,short);
		void enqueueTextChar(std::string,bool);
		void enqueueTextChar(std::string,bool);
		void enqueueVector(short,float,float,float);
		void enqueueVector(short,float,float,float);
		void nextEvent(InputEvent &);
		void nextEvent(InputEvent &);
		void ~InputEventQueue();
		void ~InputEventQueue();
};
