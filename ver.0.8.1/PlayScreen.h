#pragma once
class PlayScreen{
	public:
		PlayScreen(bool);
		void buildJoinRealmsScreen(bool);
		void buildLocalServerList(void);
		void buildMCOServerList(void);
		void buildMessageScreen(void);
		void buttonClicked(Button *);
		void closeScreen(void);
		void getState(void);
		void getStateData(PlayScreenState);
		void handleBackEvent(bool);
		void init(void);
		void isEditMode(void);
		void isLocalPlayScreen(void);
		void joinMCOServer(MCOServerListItem);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void onMojangConnectorStatus(MojangConnectionStatus);
		void render(int,int,float);
		void resetBaseButtons(void);
		void resetCurrentWaitingMCOCancelButton(void);
		void setMainPanel(PlayScreenPanel);
		void setPlayScreenSate(PlayScreenState,bool);
		void setPlayScreenStateSetting(PlayScreenState,bool,bool,bool,bool,bool,bool,PlayScreenPanel,std::string const&);
		void setupPositions(void);
		void signOut(void);
		void tick(void);
		void updateHeaderItems(PlayScreenState);
		void updateMCOServerList(void);
		void updateMCOStatus(void);
		void updateRealmsState(void);
		void ~PlayScreen();
		void ~PlayScreen();
};
