#pragma once
class ConnectionHelper{
	public:
		void _changeUpnpState(ConnectionHelper::UpnpState,int,std::string const&);
		void _changeUpnpState(ConnectionHelper::UpnpState,int,std::string const&);
		void _stateToString(ConnectionHelper::UpnpState);
		void addConnectionStateListener(ConnectionHelper::ConnectionStateListener *);
		void addConnectionStateListener(ConnectionHelper::ConnectionStateListener *);
		void removeConnectionStateListener(ConnectionHelper::ConnectionStateListener *);
		void removeConnectionStateListener(ConnectionHelper::ConnectionStateListener *);
		void setupUpnpRoute(int);
		void setupUpnpRoute(int);
		void update(void);
		void update(void);
};
