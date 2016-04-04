#pragma once
class MoveInput{
	public:
		void allowPicking(float,float);
		void clearInputState(void);
		void clearMovementState(void);
		void render(float);
		void setJumping(bool);
		void setKey(int,bool);
		void tick(LocalPlayer &);
		void ~MoveInput();
		void ~MoveInput();
};
