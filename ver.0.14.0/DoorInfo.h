#pragma once
class DoorInfo{
	public:
		DoorInfo(BlockPos const&,int,int,int);
		void distanceTo(BlockPos const&);
		void distanceTo(Vec3 const&);
		void distanceToInsideSqr(BlockPos const&);
		void distanceToInsideSqr(Vec3 const&);
		void distanceToSqr(BlockPos const&);
		void distanceToSqr(Vec3 const&);
		void getBookingsCount(void);
		void getIndoor(void);
		void getIndoorX(void);
		void getIndoorY(void);
		void getIndoorZ(void);
		void getInside(void);
		void getInsideDx(void);
		void getInsideDz(void);
		void getPosition(void);
		void getPosition(void);
		void getRemoved(void);
		void getTimeStamp(void);
		void getVillage(void);
		void incBookingCount(void);
		void isInsideSide(int,int);
		void resetBookingCount(void);
		void setInside(BlockPos const&);
		void setInsideDx(int);
		void setInsideDz(int);
		void setPosition(BlockPos);
		void setRemoved(bool);
		void setTimeStamp(int);
		void setVillage(Village *);
		void ~DoorInfo();
};
