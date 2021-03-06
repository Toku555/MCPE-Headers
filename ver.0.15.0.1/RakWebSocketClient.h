#pragma once
class RakWebSocketClient{
	public:
		RakWebSocketClient(std::unique_ptr<TcpProxy,std::default_delete<TcpProxy>>);
		void _close(CloseStatusCode);
		void _close(CloseStatusCode);
		void _createWebSocketKey(void);
		void _createWebSocketKey(void);
		void _fail(std::string const&,CloseStatusCode);
		void _invokeOnCloseHandler(void);
		void _invokeOnMessageHandler(RakWebSocketDataFrame const&);
		void _processClosingFrames(RakNet::BitStream &);
		void _processClosingHandshake(void);
		void _processDataFrames(RakNet::BitStream &);
		void _processDataFrames(RakNet::BitStream &);
		void _processOpenHandshakePackets(RakNet::BitStream &);
		void function<void ();
		void function<void ();
		void _reset(void);
		void _reset(void);
		void _sendBinaryFrame(uchar const*,ulong long);
		void _sendCloseFrame(CloseStatusCode,std::string const&);
		void _sendCloseFrame(CloseStatusCode,std::string const&);
		void _sendControlFrame(uchar const*,ulong long,OpCode);
		void _sendControlFrame(uchar const*,ulong long,OpCode);
		void _sendDataFrame(uchar const*,uint,OpCode,bool);
		void _sendNonControlFrame(uchar const*,ulong long,OpCode);
		void _sendPingFrame(std::string const&);
		void _sendPongFrame(std::shared_ptr<RakWebSocketDataFrame> const&);
		void _sendTextFrame(std::string const&);
		void _sendTextFrame(std::string const&);
		void _splitWebSocketURI(std::string const&,std::string &,std::string &,std::string &);
		void _subProcessHttpResponse(RakNet::BitStream &);
		void _subProcessHttpResponse(RakNet::BitStream &);
		void _validateFields(void);
		void _validateFields(void);
		void _validateWebSocketURI(void);
		void close(bool);
		void getUri(void);
		void isConnecting(void);
		void isDisconnected(void);
		void isNegotiating(void);
		void isReady(void);
		void send(std::string const&);
		void sendBinary(uchar const*,ulong long);
		void setMaxFrameSize(uint);
		void function<void ();
		void function<void ();
		void tick(void);
		void ~RakWebSocketClient();
};
