#pragma once
namespace j{
	class RakWebSocketClient{
		public:
		void _close(CloseStatusCode);
		void _processDataFrames(RakNet::BitStream &);
		void _reset(void);
		void _validateFields(void);
	}
};
