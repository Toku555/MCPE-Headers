#pragma once
class GuiMessage{
	public:
		GuiMessage(std::string const&,std::string const&,int,bool);
		void getMaxTicks(void);
		void getMessage(void);
		void getString(void);
		void getTicks(void);
		void getUser(void);
		void incrementTick(void);
		void isCommand(void);
		void isForceVisible(void);
};
