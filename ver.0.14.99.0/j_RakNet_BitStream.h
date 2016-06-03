#pragma once
namespace j{
	class RakNet{
		public:
		void ReadAlignedBytesSafe(char *,uint &,uint);
		void ReadAlignedBytesSafeAlloc(char **,uint &,uint);
		void ReadBits(uchar *,uint,bool);
		void ReadBits(uchar *,uint,bool);
		void Reset(void);
		void Write(RakNet::BitStream*,uint);
		void Write(char const*,uint);
		void Write1(void);
		void WriteBits(uchar const*,uint,bool);
		void WriteBits(uchar const*,uint,bool);
		void SetRakPeerInterface(RakNet::RakPeerInterface *);
		void SetTCPInterface(RakNet::TCPInterface *);
		void Send_Windows_Linux_360NoVDP(int,RakNet::RNS2_SendParameters *,char const*,uint);
		void RakPeer(void);
		void ~RakPeer();
		void Deserialize(char *,RakNet::BitStream *);
		void Free(void);
		void Serialize(char const*,RakNet::BitStream *);
		void operator+=(char const*);
		void Create(void * (*);
		void FreeThreadSafeMemory(void);
		void SetEvent(void);
		void Lock(void);
		void Unlock(void);
		void ~SimpleMutex();
		void SetBinaryAddress(char const*,char);
		void ToString_Old(bool,char *,char);
		void AllocatePacket(uint);
		void DeallocatePacket(RakNet::Packet *);
		void DeallocatePacket(RakNet::Packet *);
		void TCPInterface(void);
	}
};
