#pragma once
class PlayScreenController{
	public:
		PlayScreenController(std::shared_ptr<PlayScreenModel>);
		void _getButtonADescription(void);
		void _getLocalWorld(int);
		void _getNetworkWorld(int);
		void _getWorldGridSize(WorldType);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void onOpen(void);
		void repopulateLevels(void);
		void tick(void);
		void ~PlayScreenController();
		void ~PlayScreenController();
};
