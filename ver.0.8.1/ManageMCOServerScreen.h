#pragma once
class ManageMCOServerScreen{
	public:
		ManageMCOServerScreen(MCOServerListItem const&);
		void _addInviteElement(std::string const&);
		void _queryUsernameAndUpdateElement(std::string const&);
		void _removeInviteElement(std::string const&);
		void buttonClicked(Button *);
		void closeScreen(void);
		void handleBackEvent(bool);
		void init(void);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void onFriendItemRemoved(std::string const&);
		void onTextBoxUpdated(int);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~ManageMCOServerScreen();
		void ~ManageMCOServerScreen();
};
