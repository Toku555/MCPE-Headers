#pragma once
class AppPlatformListener{
	public:
		AppPlatformListener(bool);
		AppPlatformListener(bool);
		AppPlatformListener(void);
		AppPlatformListener(void);
		void initListener(float);
		void initListener(float);
		void onAppFocusGained(void);
		void onAppFocusGained(void);
		void onAppFocusLost(void);
		void onAppFocusLost(void);
		void onAppResumed(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void onAppTerminated(void);
		void onAppTerminated(void);
		void onLowMemory(void);
		void onLowMemory(void);
		void onPushNotificationReceived(PushNotificationMessage const&);
		void onPushNotificationReceived(PushNotificationMessage const&);
		void terminate(void);
		void terminate(void);
		void ~AppPlatformListener();
		void ~AppPlatformListener();
		void ~AppPlatformListener();
		void ~AppPlatformListener();
};
