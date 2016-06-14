#pragma once
class EncryptedNetworkPeer{
	public:
		EncryptedNetworkPeer(NetworkPeer &);
		EncryptedNetworkPeer(NetworkPeer &);
		void enableEncryption(std::string const&);
		void enableEncryption(std::string const&);
		void getNetworkStatus(void);
		void getNetworkStatus(void);
		void receivePacket(std::string &);
		void receivePacket(std::string &);
		void sendPacket(char const*,int,NetworkPeer::Reliability,int);
		void sendPacket(char const*,int,NetworkPeer::Reliability,int);
		void ~EncryptedNetworkPeer();
		void ~EncryptedNetworkPeer();
		void ~EncryptedNetworkPeer();
		void ~EncryptedNetworkPeer();
};
