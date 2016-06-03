#pragma once
class RakWebSocketDataFrame{
	public:
		RakWebSocketDataFrame(void);
		RakWebSocketDataFrame(void);
		void _isContinuation(uchar);
		void _isContinuation(uchar);
		void _isControl(uchar);
		void _isControl(uchar);
		void _isNonControl(uchar);
		void _isNonControl(uchar);
		void _isUnsupported(uchar);
		void _isUnsupported(uchar);
		void _maskUnmaskData(uchar *,uint,uint);
		void _maskUnmaskData(uchar *,uint,uint);
		void getCloseCode(void);
		void getCloseCode(void);
		void getHeader(void);
		void getHeader(void);
		void getMessageType(void);
		void getParseState(void);
		void getParseState(void);
		void getPayload(void);
		void getPayload(void);
		void getPayloadAsString(void);
		void getPayloadAsString(void);
		void writeFrameToStream(RakNet::BitStream &,uchar const*,uint,OpCode,bool,uint);
		void writeFrameToStream(RakNet::BitStream &,uchar const*,uint,OpCode,bool,uint);
		void ~RakWebSocketDataFrame();
		void ~RakWebSocketDataFrame();
};
