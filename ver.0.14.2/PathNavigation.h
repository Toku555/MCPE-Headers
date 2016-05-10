#pragma once
class PathNavigation{
	public:
		PathNavigation(Mob &,Level *,float);
		void _canMoveDirectly(Vec3 const&,Vec3 const&,int,int,int);
		void _canUpdatePath(void);
		void _canWalkAbove(int,int,int,int,int,int,Vec3 const&,float,float);
		void _canWalkOn(int,int,int,int,int,int,Vec3 const&,float,float);
		void _getSurfaceY(void);
		void _getTempMobPos(void);
		void _isInLiquid(void);
		void _trimPathFromSun(void);
		void _updatePath(void);
		void canOpenDoors(void);
		void canPassDoors(void);
		void createPath(Mob &);
		void createPath(Vec3 const&);
		void getAvoidWater(void);
		void getMaxDistance(void);
		void getPath(void);
		void isDone(void);
		void moveTo(Mob &,float);
		void moveTo(Vec3 const&,float);
		void moveTo(std::unique_ptr<Path,std::default_delete<Path>>,float);
		void setAvoidSun(bool);
		void setAvoidWater(bool);
		void setCanFloat(bool);
		void setCanOpenDoors(bool);
		void setCanPassDoors(bool);
		void setSpeed(float);
		void stop(void);
		void tick(void);
		void ~PathNavigation();
		void ~PathNavigation();
};
