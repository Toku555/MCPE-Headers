#pragma once
class Abilities{
	public:
		Abilities(void);
		Abilities(void);
		void addSaveData(CompoundTag &);
		void addSaveData(CompoundTag &);
		void getFlyingSpeed(void);
		void getFlyingSpeed(void);
		void getGlobalPermissions(void);
		void getGlobalPermissions(void);
		void getUserPermissions(void);
		void getUserPermissions(void);
		void getWalkingSpeed(void);
		void getWalkingSpeed(void);
		void isFlying(void);
		void isFlying(void);
		void loadSaveData(CompoundTag const&);
		void loadSaveData(CompoundTag const&);
		void setFlyingSpeed(float);
		void setFlyingSpeed(float);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
		void setWalkingSpeed(float);
};
