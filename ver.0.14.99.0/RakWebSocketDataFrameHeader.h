#pragma once
class RakWebSocketDataFrameHeader{
	public:
		RakWebSocketDataFrameHeader(bool,bool,bool,bool,bool,OpCode,uchar);
		RakWebSocketDataFrameHeader(bool,bool,bool,bool,bool,OpCode,uchar);
		RakWebSocketDataFrameHeader(void);
		RakWebSocketDataFrameHeader(void);
		void getFinBit(void);
		void getFinBit(void);
		void getMaskBit(void);
		void getMaskBit(void);
		void getOpCode(void);
		void getOpCode(void);
		void getPayloadLength(void);
		void getPayloadLength(void);
		void getRSV1Bit(void);
		void getRSV1Bit(void);
		void getRSV2Bit(void);
		void getRSV2Bit(void);
		void getRSV3Bit(void);
		void getRSV3Bit(void);
		void ~RakWebSocketDataFrameHeader();
		void ~RakWebSocketDataFrameHeader();
};
