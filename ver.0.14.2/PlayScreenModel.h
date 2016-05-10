#pragma once
class PlayScreenModel{
	public:
		PlayScreenModel(MinecraftClient &);
		void _isValidWorld(int,WorldType);
		void _populateLocalWorlds(void);
		void _populateNetworkWorlds(void);
		void _setIsDirty(bool);
		void _willCauseDataLossUponSave(int,WorldType);
		void addWorldTypeFilter(WorldTypeFilter);
		void areExternalAndRemoteServerSame(ExternalServer &,PingedCompatibleServer);
		void getLocalWorldAtIndex(int);
		void getNetworkWorldAtIndex(int);
		void getWorldCount(WorldType);
		void isDirty(void);
		void isEduMode(void);
		void isWorldTypeFiltered(WorldTypeFilter);
		void navigateToAddExternalScreen(void);
		void navigateToCreateWorldScreen(WorldType);
		void navigateToEditWorldScreen(int);
		void navigateToStartScreen(void);
		void refresh(WorldType);
		void removeWorld(int,WorldType);
		void repopulateLocalWorlds(void);
		void setForceUpdate(void);
		void startWorld(int,WorldType);
		void startWorldSearch(void);
		void ~PlayScreenModel();
		void ~PlayScreenModel();
};
