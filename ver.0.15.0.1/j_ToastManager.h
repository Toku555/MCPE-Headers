#pragma once
namespace j{
	class ToastManager{
		public:
		void getCurrentToast(void);
		void getNextToast(void);
		void pushNotificationReceived(PushNotificationMessage const&);
	}
};
