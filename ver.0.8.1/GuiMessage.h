#pragma once
class GuiMessage{
	public:
		GuiMessage(GuiMessage const&);
		GuiMessage(GuiMessage&&);
		GuiMessage(std::string const&,std::string const&,int);
		void operator=(GuiMessage const&);
		void operator=(GuiMessage&&);
		void ~GuiMessage();
};
