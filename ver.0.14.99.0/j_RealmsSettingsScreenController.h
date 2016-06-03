#pragma once
namespace j{
	class RealmsSettingsScreenController{
		public:
		void _extendConsumableRealm(void);
		void _joinRealm(void);
		void _openCloseRealm(bool);
		void _querySubscriptionInfo(void);
		void _resetRealm(void);
		void _saveSettings(bool,bool);
	}
};
