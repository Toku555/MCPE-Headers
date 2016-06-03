#pragma once
namespace j{
	class PlayScreenModel{
		public:
		void _fetchTrialAvailability(void);
		void _populateLocalWorlds(void);
		void _removeLocalWorld(int);
		void _startExternalNetworkWorld(int);
		void _startLocalWorld(int);
		void _startRealmsWorld(int);
		void _startRemoteNetworkWorld(int);
		void _startXBLiveNetworkWorld(int);
		void getLocalWorldAtIndex(int);
		void getNetworkWorldAtIndex(int,NetworkWorldType);
		void getRealmWorldAtIndex(int);
		void getWorldCount(WorldType,NetworkWorldType);
		void handleEditRealm(int);
		void handleLeaveRealm(int);
		void handleStartRealm(int);
		void refresh(WorldType);
		void repopulateLocalWorlds(void);
	}
};
