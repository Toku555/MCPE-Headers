#pragma once
class Abilities{
	public:
		Abilities(void);
		void addSaveData(CompoundTag &);
		void getFlyingSpeed(void);
		void getGlobalPermissions(void);
		void getUserPermissions(void);
		void getWalkingSpeed(void);
		void isFlying(void);
		void loadSaveData(CompoundTag const&);
		void setFlyingSpeed(float);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
		void setWalkingSpeed(float);
};
