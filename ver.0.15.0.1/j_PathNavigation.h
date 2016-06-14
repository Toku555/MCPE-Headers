#pragma once
namespace j{
	class PathNavigation{
		public:
		void setAvoidSun(bool);
		void setAvoidWater(bool);
		void setCanPassDoors(bool);
		void setSpeed(float);
		void tick(void);
	}
};
