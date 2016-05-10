#pragma once
class ScreenInputContext{
	public:
		ScreenInputContext(void);
		void enqueueEvent(ScreenEvent const&);
		void getButtonUpRightOfFirstRefusalRequests(void);
		void getEventQueue(void);
		void requestButtonUpRightOfFirstRefusal(short,std::weak_ptr<UIControl>);
};
