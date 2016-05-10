#pragma once
class PlayScreenController{
	public:
		PlayScreenController(std::shared_ptr<PlayScreenModel>);
		void _getButtonADescription(void);
		void _getLocalWorld(int);
		void _getNetworkWorld(int);
		void _getWorldGridSize(WorldType);
		void onOpen(void);
		void repopulateLevels(void);
		void tick(void);
		void ~PlayScreenController();
		void ~PlayScreenController();
};
