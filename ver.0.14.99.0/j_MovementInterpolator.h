#pragma once
namespace j{
	class MovementInterpolator{
		public:
		void lerpTo(Vec3 const&,Vec2 const&,int);
		void tick(Entity &);
	}
};
