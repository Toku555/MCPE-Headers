#pragma once
class MCOInviteListItemElement{
	public:
		void string,ManageMCOServerScreen &,void (ManageMCOServerScreen::*);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void onFriendSearchCompleted(std::string const&);
		void render(Minecraft *,int,int);
		void setupPositions(void);
		void ~MCOInviteListItemElement();
		void ~MCOInviteListItemElement();
};
