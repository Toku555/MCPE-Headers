#pragma once
class CommandServer{
	public:
		CommandServer(Minecraft *);
		void _close(void);
		void _updateAccept(void);
		void _updateClient(ConnectedClient &);
		void _updateClients(void);
		void dispatchPacket(Packet &);
		void handleCheckpoint(bool);
		void handleEventPollMessage(ConnectedClient &,std::string const&);
		void handleSetSetting(std::string const&,int);
		void init(short);
		void parse(ConnectedClient &,std::string const&);
		void tick(void);
		void ~CommandServer();
};
