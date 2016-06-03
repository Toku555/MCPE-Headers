#pragma once
class ToastManager{
	public:
		ToastManager(MinecraftClient &);
		ToastManager(MinecraftClient &);
		void _toastChanged(void);
		void _toastChanged(void);
		void getCurrentToast(void);
		void getCurrentToast(void);
		void getNextToast(void);
		void getNextToast(void);
		void handleToastClicked(Vec2 const&);
		void handleToastClicked(Vec2 const&);
		void pushNotificationReceived(PushNotificationMessage const&);
		void pushNotificationReceived(PushNotificationMessage const&);
		void pushToast(ToastMessageType,std::string const&,std::string const&,std::string const&);
		void pushToast(ToastMessageType,std::string const&,std::string const&,std::string const&);
		void ~ToastManager();
		void ~ToastManager();
};
