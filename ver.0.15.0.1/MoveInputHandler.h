#pragma once
class MoveInputHandler{
	public:
		MoveInputHandler(InputHandler &,Options const&);
		MoveInputHandler(InputHandler &,Options const&);
		void _registerButtonStateTracking(std::string const&,bool *);
		void _registerButtonStateTracking(std::string const&,bool *);
		void _toggleSneak(void);
		void _updateButtonDown(bool *,bool);
		void _updateGGVector(short,float,float,float);
		void _updateMoveVector(float,float);
		void _updateXY(bool);
		void clearInputState(void);
		void clearInputState(void);
		void clearMovementState(void);
		void clearMovementState(void);
		void isMovingForward(void);
		void isMovingForward(void);
		void setSneakDown(bool);
		void setSneakDown(bool);
		void tick(LocalPlayer &);
		void tick(LocalPlayer &);
		void ~MoveInputHandler();
		void ~MoveInputHandler();
};
