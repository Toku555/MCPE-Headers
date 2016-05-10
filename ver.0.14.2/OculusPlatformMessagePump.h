#pragma once
class OculusPlatformMessagePump{
	public:
		OculusPlatformMessagePump(void);
		void addOVRPlatformMessageHandler(OVRPlatformMessageHandler *);
		void handleOVRPlatformMessage(ovrMessage &);
		void pumpMessages(void);
		void removeOVRPlatformMessageHandler(OVRPlatformMessageHandler *);
};
