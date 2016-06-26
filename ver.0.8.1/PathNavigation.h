#pragma once
class PathNavigation{
	public:
		PathNavigation(Mob *,Level *,float);
		void canMoveDirectly(Vec3,Vec3,int,int,int);
		void canOpenDoors(void);
		void canPassDoors(void);
		void canUpdatePath(void);
		void canWalkAbove(int,int,int,int,int,int,Vec3,float,float);
		void canWalkOn(int,int,int,int,int,int,Vec3,float,float);
		void createPath(Mob *);
		void createPath(float,float,float);
		void getAvoidWater(void);
		void getPath(void);
		void getSurfaceY(void);
		void getTempMobPos(void);
		void isDone(void);
		void isInLiquid(void);
		void moveTo(Mob *,float);
		void moveTo(Path *,float);
		void moveTo(float,float,float,float);
		void setAvoidSun(bool);
		void setAvoidWater(bool);
		void setCanFloat(bool);
		void setCanOpenDoors(bool);
		void setCanPassDoors(bool);
		void setLevel(Level *);
		void setSpeed(float);
		void stop(void);
		void tick(void);
		void trimPathFromSun(void);
		void updatePath(void);
		void ~PathNavigation();
};
