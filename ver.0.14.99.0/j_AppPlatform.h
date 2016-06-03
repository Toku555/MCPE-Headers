#pragma once
namespace j{
	class AppPlatform{
		public:
		void StringizeUIScalingRules(UIScalingRules);
		void _fireAppFocusLost(void);
		void _fireAppResumed(void);
		void _fireLowMemory(void);
		void _fireLowMemory(void);
		void useMetadataDrivenScreens(void);
	}
};
