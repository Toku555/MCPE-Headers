#pragma once
namespace j{
	class PermissionsHandler{
		public:
		void getGlobalPermissions(void);
		void getUserPermissions(void);
		void setGlobalPermissions(GlobalPermissionsLevel);
		void setUserPermissions(UserPermissionsLevel);
	}
};
