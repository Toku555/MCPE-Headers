#pragma once
class GuiMessage{
	public:
		GuiMessage(std::string const&,std::string const&,int,bool);
		GuiMessage(void);
		void getMaxTicks(void);
		void getMessage(void);
		void getPercentComplete(void);
		void getString(void);
		void getTicks(void);
		void getUser(void);
		void incrementTick(void);
		void isCommand(void);
		void isDead(void);
		void isForceVisible(void);
		void isNew(void);
		void setOld(void);
};
