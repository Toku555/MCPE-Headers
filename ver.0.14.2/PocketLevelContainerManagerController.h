#pragma once
class PocketLevelContainerManagerController{
	public:
		PocketLevelContainerManagerController(std::weak_ptr<LevelContainerManagerModel>);
		void _setupSelectedItemText(ContainerItemStack &);
		void _storeFlyingItemInformation(ContainerItemStack &,std::string const&,int);
		void calculateTextAlpha(void);
		void getAndResetDirtyFlag(void);
		void getDisplayTime(void);
		void getFromContainerName(void);
		void getFromIndex(void);
		void getItemColor(void);
		void getOtherContainerName(std::string const&);
		void getQueuedItems(void);
		void getSelectedEffectName(void);
		void getSelectedItemName(void);
		void getSentItemIdAux(void);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void hasPendingViewCommands(void);
		void isTextVisible(void);
		void resetQueuedItems(void);
		void setDisplayTime(float);
		void updateDisplayTime(void);
		void ~PocketLevelContainerManagerController();
		void ~PocketLevelContainerManagerController();
};
