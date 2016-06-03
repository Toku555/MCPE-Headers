#pragma once
class DebugUdpProxy{
	public:
		DebugUdpProxy(std::string const&,ushort);
		void _doTransfer(int,std::array<int,10u> &);
		void _doTransfer(int,std::array<int,10u> &);
		void _readNewPackets(void);
		void _routingLoop(void);
		void _sendDelayedPackets(void);
		void _sendDelayedPackets(void);
		void _start(void);
		void _stop(void);
		void getHost(void);
		void getHost(void);
		void getPort(void);
		void getPort(void);
		void setQuality(DevConnectionQuality);
		void setQuality(DevConnectionQuality);
		void ~DebugUdpProxy();
};
