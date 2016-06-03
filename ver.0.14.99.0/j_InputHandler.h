#pragma once
namespace j{
	class InputHandler{
		public:
		void clearInputDeviceQueues(void);
		void getButtonRegistry(void);
		void getCurrentInputMode(void);
		void getCursorPos(float &,float &);
		void getInputEventQueue(void);
		void popInputMapping(void);
		void pushInputMapping(std::string const&);
		void setSuspendInput(bool);
		void setWindowSize(int,int);
		void tick(void);
		void updateInputMapping(std::string const&);
	}
};
