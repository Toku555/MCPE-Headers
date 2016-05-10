#pragma once
class MovementInterpolator{
	public:
		MovementInterpolator(void);
		void lerpTo(Vec3 const&,Vec2 const&,int);
		void stop(void);
		void tick(Entity &);
};
