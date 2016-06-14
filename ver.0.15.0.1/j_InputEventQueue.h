#pragma once
namespace j{
	class InputEventQueue{
		public:
		void enqueueButton(short,ButtonState,bool);
		void enqueueDirection(DirectionId,float,float);
	}
};
