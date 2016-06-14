#pragma once
namespace j{
	class GuiData{
		public:
		void _splitAddChatMessage(std::vector<GuiMessage,std::allocator<GuiMessage>> &,GuiMessage&);
		void displayChatMessage(std::string const&,std::string const&);
		void displayClientMessage(std::string const&);
		void displayLocalizableMessage(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void displaySystemMessage(std::string const&);
		void getNumSlots(void);
		void getTipMessage(std::string &);
		void setIsChatting(bool);
		void setLastSelectedSlot(int);
		void setShowProgress(bool);
		void showPopupNotice(std::string const&,std::string const&);
		void showTipMessage(std::string const&);
		void toggleMuteChat(void);
		void ~GuiData();
	}
};
