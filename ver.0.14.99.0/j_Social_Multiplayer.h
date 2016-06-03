#pragma once
namespace j{
	class Social{
		public:
		void clearInviteHandle(void);
		void invitePlayers(std::vector<std::string,std::allocator<std::string>> const&);
		void onExitLevel(uint);
		void setInviteHandle(std::string const&,bool);
		void ~Multiplayer();
		void updateMeasurements(Social::Telemetry::TelemetryEvent const&);
		void sendEvents(bool);
		void tick(void);
		void getPlayerAchievementData(void);
		void isAchievementDataCached(void);
		void isSignedIn(void);
		void onSignOut(void);
		void signOut(void);
		void _refresh(void);
	}
};
