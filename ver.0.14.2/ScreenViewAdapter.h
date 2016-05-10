#pragma once
class ScreenViewAdapter{
	public:
		void _init(int,int);
		void getScreenPosFromClient(Vec2 const&);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void handleButtonRelease(short);
		void handleLicenseChanged(void);
		void handlePointerLocation(short,short);
		void handlePointerPressed(bool);
		void setSize(int,int);
		void updateEvents(void);
		void ~ScreenViewAdapter();
		void ~ScreenViewAdapter();
};
