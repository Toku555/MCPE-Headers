#pragma once
class PermissionsHandler{
	public:
		PermissionsHandler(void);
		PermissionsHandler(void);
		void addSaveData(CompoundTag &);
		void addSaveData(CompoundTag &);
		void getGlobalPermissions(void);
		void getGlobalPermissions(void);
		void getUserPermissions(void);
		void getUserPermissions(void);
		void loadSaveData(CompoundTag const&);
		void loadSaveData(CompoundTag const&);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
};
