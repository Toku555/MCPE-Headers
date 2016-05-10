#pragma once
class PermissionsHandler{
	public:
		PermissionsHandler(void);
		void addSaveData(CompoundTag &);
		void getGlobalPermissions(void);
		void getUserPermissions(void);
		void loadSaveData(CompoundTag const&);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
};
