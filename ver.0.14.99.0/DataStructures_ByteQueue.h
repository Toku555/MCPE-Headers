#pragma once
namespace DataStructures{
	class ByteQueue{
		public:
		void ByteQueue(void);
		void ByteQueue(void);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void DecrementReadOffset(uint);
		void GetBytesWritten(void);
		void GetBytesWritten(void);
		void IncrementReadOffset(uint);
		void IncrementReadOffset(uint);
		void PeekContiguousBytes(uint *);
		void PeekContiguousBytes(uint *);
		void Print(void);
		void ReadBytes(char *,uint,bool);
		void ReadBytes(char *,uint,bool);
		void WriteBytes(char const*,uint,char const*,uint);
		void WriteBytes(char const*,uint,char const*,uint);
		void ~ByteQueue();
		void ~ByteQueue();
		void Add(HuffmanEncodingTreeNode * const&);
		void Add(HuffmanEncodingTreeNode * const&);
		void Insert(HuffmanEncodingTreeNode * const&);
		void Insert(HuffmanEncodingTreeNode * const&);
		void Push(ulong long const&,RakNet::InternalPacket * const&,char const*,uint);
		void PushSeries(ulong long const&,RakNet::InternalPacket * const&,char const*,uint);
		void PushSeries(ulong long const&,RakNet::InternalPacket * const&,char const*,uint);
		void Insert(DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&DataStructures::defaultMapKeyComparison<int>>::MapNode const&,uint,char const*,uint);
		void Insert(DataStructures::Map<int,RakNet::HuffmanEncodingTree *,&DataStructures::defaultMapKeyComparison<int>>::MapNode const&,uint,char const*,uint);
		void Insert(DataStructures::RangeNode<RakNet::uint24_t> const&,char const*,uint);
		void Insert(DataStructures::RangeNode<RakNet::uint24_t> const&,char const*,uint);
		void Insert(DataStructures::RangeNode<RakNet::uint24_t> const&,uint,char const*,uint);
		void Insert(DataStructures::RangeNode<RakNet::uint24_t> const&,uint,char const*,uint);
		void Insert(RakNet::RakNetGUID const&,char const*,uint);
		void Insert(RakNet::RakNetGUID const&,char const*,uint);
		void ~List();
		void Insert(RakNet::RakString const&,char const*,uint);
		void Insert(RakNet::RakString const&,char const*,uint);
		void Insert(RakNet::SystemAddress const&,char const*,uint);
		void Insert(RakNet::SystemAddress const&,char const*,uint);
		void Set(int const&,RakNet::HuffmanEncodingTree * const&);
		void Set(int const&,RakNet::HuffmanEncodingTree * const&);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::InternalPacket*,char const*,uint);
		void Release(RakNet::InternalPacket*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::InternalPacketRefCountedData*,char const*,uint);
		void Release(RakNet::InternalPacketRefCountedData*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::Packet*,char const*,uint);
		void Release(RakNet::Packet*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::RakPeer::BufferedCommandStruct*,char const*,uint);
		void Release(RakNet::RakPeer::BufferedCommandStruct*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::RakPeer::SocketQueryOutput*,char const*,uint);
		void Release(RakNet::RakPeer::SocketQueryOutput*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::ReliabilityLayer::MessageNumberNode*,char const*,uint);
		void Release(RakNet::ReliabilityLayer::MessageNumberNode*,char const*,uint);
		void Release(RakNet::RemoteClient **,char const*,uint);
		void Release(RakNet::RemoteClient **,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::RemoteSystemIndex*,char const*,uint);
		void Release(RakNet::RemoteSystemIndex*,char const*,uint);
		void Allocate(char const*,uint);
		void Allocate(char const*,uint);
		void Release(RakNet::SystemAddress*,char const*,uint);
		void Release(RakNet::SystemAddress*,char const*,uint);
		void StrAndBoolComp(char * const&,StrAndBool const&);
		void StrAndBoolComp(char * const&,StrAndBool const&);
		void SplitPacketChannel * const&,bool,char const*,uint,int (*);
		void SplitPacketChannel * const&,bool,char const*,uint,int (*);
		void Push(HuffmanEncodingTreeNode * const&,char const*,uint);
		void Push(HuffmanEncodingTreeNode * const&,char const*,uint);
		void Push(RakNet::BPSTracker::TimeAndValue2 const&,char const*,uint);
		void Push(RakNet::BPSTracker::TimeAndValue2 const&,char const*,uint);
		void Push(RakNet::InternalPacket * const&,char const*,uint);
		void Push(RakNet::InternalPacket * const&,char const*,uint);
		void Push(RakNet::Packet * const&,char const*,uint);
		void Push(RakNet::Packet * const&,char const*,uint);
		void Push(RakNet::RNS2RecvStruct * const&,char const*,uint);
		void Push(RakNet::RNS2RecvStruct * const&,char const*,uint);
		void Push(RakNet::RakPeer::BufferedCommandStruct * const&,char const*,uint);
		void Push(RakNet::RakPeer::BufferedCommandStruct * const&,char const*,uint);
		void Push(RakNet::RakPeer::RequestedConnectionStruct * const&,char const*,uint);
		void Push(RakNet::RakPeer::RequestedConnectionStruct * const&,char const*,uint);
		void Push(RakNet::RakPeer::SocketQueryOutput * const&,char const*,uint);
		void Push(RakNet::RakPeer::SocketQueryOutput * const&,char const*,uint);
		void Push(RakNet::ReliabilityLayer::DatagramHistoryNode const&,char const*,uint);
		void Push(RakNet::ReliabilityLayer::DatagramHistoryNode const&,char const*,uint);
		void Push(RakNet::SystemAddress * const&,char const*,uint);
		void Push(RakNet::SystemAddress * const&,char const*,uint);
		void Push(RakNet::SystemAddress const&,char const*,uint);
		void Push(RakNet::SystemAddress const&,char const*,uint);
		void Push(bool const&,char const*,uint);
		void Push(bool const&,char const*,uint);
		void Deserialize(RakNet::BitStream *);
		void Deserialize(RakNet::BitStream *);
		void Insert(RakNet::uint24_t);
		void Insert(RakNet::uint24_t);
		void Serialize(RakNet::BitStream *,uint,bool);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
		void ~ThreadsafeAllocatingQueue();
		void ~ThreadsafeAllocatingQueue();
	}
};
