#pragma once
class MoveInputHandler{
	public:
		void _registerButtonStateTracking(std::string const&,bool *);
		void _toggleSneak(void);
		void _updateButtonDown(bool *,bool);
		void _updateGGVector(short,float,float,float);
		void _updateMoveVector(float,float);
		void _updateXY(bool);
		void clearInputState(void);
		void clearMovementState(void);
		void isMovingForward(void);
		void tick(LocalPlayer &);
		void ~MoveInputHandler();
		void ~MoveInputHandler();
};
