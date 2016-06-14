#pragma once
namespace j{
	class PlayScreenModel{
		public:
		void _fetchTrialAvailability(void);
		void _populateLocalWorlds(void);
		void _removeLocalWorld(int);
		void getLocalWorldAtIndex(int);
		void getNetworkWorldAtIndex(int,NetworkWorldType);
		void getRealmWorldAtIndex(int);
		void getWorldCount(WorldType,NetworkWorldType);
		void handleCreateRealm(void);
		void handleEditRealm(int);
		void handleLeaveRealm(int);
		void handleStartRealm(int);
		void refresh(WorldType);
		void repopulateLocalWorlds(void);
		void startWorld(int,WorldType,NetworkWorldType);
	}
};
