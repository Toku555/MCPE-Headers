#pragma once
class AppPlatformListener{
	public:
		AppPlatformListener(bool);
		AppPlatformListener(void);
		void initListener(float);
		void onAppFocusGained(void);
		void onAppFocusLost(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onAppTerminated(void);
		void onLowMemory(void);
		void terminate(void);
		void ~AppPlatformListener();
		void ~AppPlatformListener();
};
