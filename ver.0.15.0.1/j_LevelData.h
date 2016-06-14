#pragma once
namespace j{
	class LevelData{
		public:
		void getCurrentTick(void);
		void getGlobalPermissions(void);
		void getSeed(void);
		void getSpawn(void);
		void getTime(void);
		void setGlobalPermissions(GlobalPermissionsLevel);
	}
};
