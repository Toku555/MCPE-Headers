#pragma once
class BoatModel{
	public:
		BoatModel(void);
		void _animatePaddle(Boat const&,Side,float,float);
		void _makePaddle(bool);
		void render(Entity &,float,float,float,float,float,float);
		void setupAnim(float,float,float,float,float,float);
		void ~BoatModel();
		void ~BoatModel();
};
