#pragma once
class PlayScreenController{
	public:
		PlayScreenController(std::shared_ptr<PlayScreenModel>);
		PlayScreenController(std::shared_ptr<PlayScreenModel>);
		void _areRealmsFetched(void);
		void _getButtonADescription(void);
		void _getButtonADescription(void);
		void _getCollectionIndex(UIPropertyBag *);
		void _getCollectionIndex(UIPropertyBag *);
		void _getCollectionName(UIPropertyBag *);
		void _getCollectionName(UIPropertyBag *);
		void _getLocalWorld(int);
		void _getLocalWorldGridSize(void);
		void _getLocalWorldsCount(void);
		void _getNetworkGridSize(NetworkWorldType);
		void _getNetworkWorld(int,NetworkWorldType);
		void _getNetworkWorldsCount(NetworkWorldType);
		void _getNetworldWorldTypeFromCollection(std::string const&);
		void _getRealmWorld(int);
		void _getRealmsGridSize(void);
		void _getRealmsUnavailableMessage(void);
		void _getRealmsUnavailableMessage(void);
		void _getRealmsWorldsCount(void);
		void _getTotalNetworlkWorldCount(void);
		void _hasRealmsWorlds(void);
		void _isRealmsEnabled(void);
		void _isXBLConnected(void);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _showRealmsCreateFirstWorld(void);
		void _showRealmsCreateFirstWorld(void);
		void _showRealmsList(void);
		void _showRealmsList(void);
		void _showRealmsUnavailableMessage(void);
		void _showSignInButton(void);
		void getAdditionalScreenInfo(void);
		void getAdditionalScreenInfo(void);
		void onOpen(void);
		void onOpen(void);
		void repopulateLevels(void);
		void repopulateLevels(void);
		void tick(void);
		void tick(void);
		void ~PlayScreenController();
		void ~PlayScreenController();
		void ~PlayScreenController();
		void ~PlayScreenController();
};
