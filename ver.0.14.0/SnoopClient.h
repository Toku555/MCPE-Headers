#pragma once
class SnoopClient{
	public:
		SnoopClient(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&);
		void _destroySnoopRequest(void);
		void _fillCommonData(Json::Value &,std::string const&,ulong long);
		void _getBundleData(SnoopBundles::Bundle &);
		void _postSnoopEventInternal(std::string const&,std::initializer_list<std::pair<std::string const,Json::Value const> const>);
		void _sendEvents(SnoopBundles::Bundle &);
		void _trySendEvents(void);
		void clearGameId(void);
		void getGameID(void);
		void postSnoopEvent(std::string const&,std::initializer_list<std::pair<std::string const,Json::Value const> const>);
		void ~SnoopClient();
};
