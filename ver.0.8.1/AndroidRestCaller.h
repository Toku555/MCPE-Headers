#pragma once
class AndroidRestCaller{
	public:
		AndroidRestCaller(MCOConnector *,std::string const&);
		void getRequestIndex(int,RestCallerObject **);
		void makeRequest(RestCallerObject *);
		void onRequestComplete(int,int,std::string const&);
		void requestStop(void);
		void ~AndroidRestCaller();
		void ~AndroidRestCaller();
};
