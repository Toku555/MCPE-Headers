#pragma once
class ScreenInputContext{
	public:
		ScreenInputContext(void);
		ScreenInputContext(void);
		void enqueueEvent(ScreenEvent const&);
		void enqueueEvent(ScreenEvent const&);
		void getButtonUpRightOfFirstRefusalRequests(void);
		void getButtonUpRightOfFirstRefusalRequests(void);
		void getEventQueue(void);
		void getEventQueue(void);
		void requestButtonUpRightOfFirstRefusal(short,std::weak_ptr<UIControl>);
		void requestButtonUpRightOfFirstRefusal(short,std::weak_ptr<UIControl>);
};
