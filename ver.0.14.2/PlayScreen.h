#pragma once
class PlayScreen{
	public:
		PlayScreen(MinecraftClient &,bool);
		void _buildMessageScreen(void);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _getStateData(PlayScreenState);
		void _handleCreateWorld(void);
		void _headerTitle(void);
		void _isLocalPlayScreen(void);
		void _iterateAndHighlightChildren(std::shared_ptr<PackedScrollContainer>);
		void _renderControllerButtons(void);
		void _resetBaseButtons(void);
		void _setPlayScreenState(PlayScreenState,bool);
		void _setPlayScreenStateSetting(PlayScreenState,bool,bool,bool,bool,bool,bool,PlayScreenPanel,std::string const&);
		void _updateHeaderItems(PlayScreenState);
		void closeScreen(void);
		void getScreenName(void);
		void getState(void);
		void handleBackEvent(bool);
		void init(void);
		void onFocusGained(void);
		void render(int,int,float);
		void setMainPanel(PlayScreenPanel);
		void setReloadLocalListFlag(bool);
		void setupPositions(void);
		void tick(void);
		void ~PlayScreen();
		void ~PlayScreen();
};
