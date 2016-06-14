#pragma once
class RakNetServerLocator{
	public:
		RakNetServerLocator(RakNetInstance &);
		RakNetServerLocator(RakNetInstance &);
		void activate(void);
		void addCustomServer(std::string const&,int);
		void addCustomServer(std::string const&,int);
		void announceServer(std::string const&,int,int);
		void announceServer(std::string const&,int,int);
		void clearServerList(void);
		void clearServerList(void);
		void deactivate(void);
		void findServers(int);
		void findServers(int);
		void getServerList(void);
		void getServerList(void);
		void handleUnconnectedPong(std::string const&,RakNet::Packet const*,bool);
		void handleUnconnectedPong(std::string const&,RakNet::Packet const*,bool);
		void stopAnnouncingServer(void);
		void stopAnnouncingServer(void);
		void stopFindingServers(void);
		void stopFindingServers(void);
		void update(void);
		void update(void);
		void validateVersion(std::string const&);
		void ~RakNetServerLocator();
		void ~RakNetServerLocator();
		void ~RakNetServerLocator();
		void ~RakNetServerLocator();
};
