#pragma once
namespace RakNet{
	class AddressOrGUID{
		public:
		void AddressOrGUID(RakNet::AddressOrGUID const&);
		void AddressOrGUID(RakNet::Packet *);
		void AddressOrGUID(RakNet::RakNetGUID const&);
		void AddressOrGUID(RakNet::SystemAddress const&);
		void AddressOrGUID(void);
		void IsUndefined(void);
		void ToInteger(RakNet::AddressOrGUID const&);
		void ToString(bool);
		void ToString(bool,char *);
		void operator=(RakNet::SystemAddress const&);
		void BPSTracker(void);
		void ClearExpired1(ulong long);
		void GetTotal1(void);
		void Push1(ulong long,ulong long);
		void Reset(char const*,uint);
		void TimeAndValue2(ulong long,ulong long);
		void TimeAndValue2(void);
		void ~TimeAndValue2();
		void ~BPSTracker();
		void AddBitsAndReallocate(uint);
		void AlignReadToByteBoundary(void);
		void AlignWriteToByteBoundary(void);
		void AssertCopyData(void);
		void AssertStreamEmpty(void);
		void BitStream(uchar *,uint,bool);
		void BitStream(uint);
		void BitStream(void);
		void CopyData(uchar **);
		void DestroyInstance(RakNet::BitStream*);
		void DoEndianSwap(void);
		void EndianSwapBytes(int,int);
		void GetInstance(void);
		void GetNumberOfBitsAllocated(void);
		void IgnoreBits(uint);
		void IgnoreBytes(uint);
		void IsNetworkOrder(void);
		void IsNetworkOrderInternal(void);
		void NumberOfLeadingZeroes(int);
		void NumberOfLeadingZeroes(long long);
		void NumberOfLeadingZeroes(short);
		void NumberOfLeadingZeroes(signed char);
		void NumberOfLeadingZeroes(uchar);
		void NumberOfLeadingZeroes(uint);
		void NumberOfLeadingZeroes(ulong long);
		void NumberOfLeadingZeroes(ushort);
		void PadWithZeroToByteLength(uint);
		void PrintBits(char *);
		void PrintBits(void);
		void PrintHex(char *);
		void PrintHex(void);
		void Read(RakNet::BitStream&);
		void Read(RakNet::BitStream&,uint);
		void Read(RakNet::BitStream*);
		void Read(RakNet::BitStream*,uint);
		void Read(char *);
		void Read(char *,uint);
		void Read(uchar *);
		RakNetGUID>(RakNet::RakNetGUID &);
		void RakString>(RakNet::RakString &);
		void SystemAddress>(RakNet::SystemAddress &);
		void uint24_t>(RakNet::uint24_t &);
		void Read<bool>(bool &);
		void Read<char>(char &);
		void Read<float>(float &);
		void Read<int>(int &);
		void Read<long>(long &);
		void Read<short>(short &);
		void Read<signed char>(signed char &);
		void Read<uchar>(uchar &);
		void Read<uint>(uint &);
		void Read<ulong long>(ulong long &);
		void Read<ushort>(ushort &);
		void ReadAlignedBytes(uchar *,uint);
		void ReadAlignedBytesSafe(char *,int &,int);
		void ReadAlignedBytesSafe(char *,uint &,uint);
		void ReadAlignedBytesSafeAlloc(char **,int &,uint);
		void ReadAlignedBytesSafeAlloc(char **,uint &,uint);
		void ReadAlignedVar16(char *);
		void ReadAlignedVar32(char *);
		void ReadAlignedVar8(char *);
		void ReadBit(void);
		void ReadBits(uchar *,uint,bool);
		void ReadCompressed(uchar *,uint,bool);
		void ReadCompressed<uint>(uint &);
		void ReadFloat16(float &,float,float);
		void Reset(void);
		void ResetReadPointer(void);
		void ResetWritePointer(void);
		void ReverseBytes(uchar *,uchar *,uint);
		void ReverseBytesInPlace(uchar *,uint);
		void SerializeFloat16(bool,float &,float,float);
		void SetData(uchar *);
		void SetNumberOfBitsAllocated(uint);
		void SetWriteOffset(uint);
		void Write(RakNet::BitStream&);
		void Write(RakNet::BitStream&,uint);
		void Write(RakNet::BitStream*);
		void Write(RakNet::BitStream*,uint);
		void Write(char const*,uint);
		void Write0(void);
		void Write1(void);
		RakNetGUID>(RakNet::RakNetGUID const&);
		void SystemAddress>(RakNet::SystemAddress const&);
		void uint24_t>(RakNet::uint24_t const&);
		void Write<float>(float const&);
		void Write<int>(int const&);
		void Write<long>(long const&);
		void Write<short>(short const&);
		void Write<signed char>(signed char const&);
		void Write<uchar>(uchar const&);
		void Write<uint>(uint const&);
		void Write<ulong long>(ulong long const&);
		void Write<ushort>(ushort const&);
		void WriteAlignedBytes(uchar const*,uint);
		void WriteAlignedBytesSafe(char const*,uint,uint);
		void WriteAlignedVar16(char const*);
		void WriteAlignedVar32(char const*);
		void WriteAlignedVar8(char const*);
		void WriteBits(uchar const*,uint,bool);
		void WriteCompressed(uchar const*,uint,bool);
		void WriteCompressed<uint>(uint const&);
		void WriteFloat16(float,float,float);
		void ~BitStream();
		void CCRakNetSlidingWindow(void);
		void GetAndIncrementNextDatagramSequenceNumber(void);
		void GetBytesPerSecondLimitByCongestionControl(void);
		void GetLocalReceiveRate(ulong long);
		void GetMTU(void);
		void GetNextDatagramSequenceNumber(void);
		void GetRTOForRetransmission(void);
		void GetRTT(void);
		void GetRetransmissionBandwidth(ulong long,ulong long,uint,bool);
		void GetSenderRTOForACK(void);
		void GetTransmissionBandwidth(ulong long,ulong long,uint,bool);
		void GreaterThan(RakNet::uint24_t,RakNet::uint24_t);
		void Init(ulong long,uint);
		void IsInSlowStart(void);
		void LessThan(RakNet::uint24_t,RakNet::uint24_t);
		void OnAck(ulong long,ulong long,bool,double,double,double,bool,RakNet::uint24_t);
		void OnDuplicateAck(ulong long,RakNet::uint24_t);
		void OnGotPacket(RakNet::uint24_t,bool,ulong long,uint,uint *);
		void OnGotPacketPair(RakNet::uint24_t,uint,ulong long);
		void OnNAK(ulong long,RakNet::uint24_t);
		void OnResend(ulong long);
		void OnSendAck(ulong long,uint);
		void OnSendAckGetBAndAS(ulong long,bool *,double *,double *);
		void OnSendBytes(ulong long,uint);
		void OnSendNACK(ulong long,uint);
		void SetMTU(uint);
		void ShouldSendACKs(ulong long,ulong long);
		void Update(ulong long,bool);
		void ~CCRakNetSlidingWindow();
		void ConnectionAttemptLoop(void *);
		void GetTime(void);
		void GetTimeMS(void);
		void GetTimeUS(void);
		void GreaterThan(ulong long,ulong long);
		void DecodeArray(RakNet::BitStream *,uint,uint,uchar *);
		void DecodeArray(uchar *,uint,RakNet::BitStream *);
		void EncodeArray(uchar *,uint,RakNet::BitStream *);
		void FreeMemory(void);
		void GenerateFromFrequencyTable(uint *);
		void HuffmanEncodingTree(void);
		void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *,DataStructures::LinkedList<HuffmanEncodingTreeNode *> *);
		void ~HuffmanEncodingTree();
		void LessThan(ulong long,ulong long);
		void Decrement(void);
		void Increment(void);
		void LocklessUint32_t(uint);
		void LocklessUint32_t(void);
		void NonNumericHostString(char const*);
		void Packet(void);
		void AddToConnectionList(RakNet::SystemAddress const&);
		void AttachPlugin(RakNet::PluginInterface2 *);
		void ClearAllConnections(void);
		void CloseConnection(RakNet::SystemAddress);
		void DestroyInstance(RakNet::PacketizedTCP*);
		void DetachPlugin(RakNet::PluginInterface2 *);
		void GetInstance(void);
		void HasCompletedConnectionAttempt(void);
		void HasFailedConnectionAttempt(void);
		void HasLostConnection(void);
		void HasNewIncomingConnection(void);
		void PacketizedTCP(void);
		void PushNotificationsToQueues(void);
		void Receive(void);
		void RemoveFromConnectionList(RakNet::SystemAddress const&);
		void ReturnOutgoingPacket(void);
		void Send(char const*,uint,RakNet::SystemAddress const&,bool);
		void SendList(char const**,int const*,int,RakNet::SystemAddress const&,bool);
		void Start(ushort,ushort,int,ushort);
		void Stop(void);
		void ~PacketizedTCP();
		void ~PacketizedTCP();
		void AllocatePacketUnified(uint);
		void DeallocPacketUnified(RakNet::Packet *);
		void OnAck(uint,RakNet::SystemAddress,uint);
		void OnAttach(void);
		void OnClosedConnection(RakNet::SystemAddress const&,RakNet::RakNetGUID,RakNet::PI2_LostConnectionReason);
		void OnDetach(void);
		void OnDirectSocketReceive(char const*,uint,RakNet::SystemAddress);
		void OnDirectSocketSend(char const*,uint,RakNet::SystemAddress);
		void OnFailedConnectionAttempt(RakNet::Packet *,RakNet::PI2_FailedConnectionAttemptReason);
		void OnInternalPacket(RakNet::InternalPacket *,uint,RakNet::SystemAddress,uint,int);
		void OnNewConnection(RakNet::SystemAddress const&,RakNet::RakNetGUID,bool);
		void OnPushBackPacket(char const*,uint,RakNet::SystemAddress);
		void OnRakPeerShutdown(void);
		void OnRakPeerStartup(void);
		void OnReceive(RakNet::Packet *);
		void OnReliabilityLayerPacketError(char const*,uint,RakNet::SystemAddress);
		void PluginInterface2(void);
		void PushBackPacketUnified(RakNet::Packet *,bool);
		void SendListUnified(char const**,int const*,int,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool);
		void SendUnified(RakNet::BitStream const*,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool);
		void SetPacketizedTCP(RakNet::PacketizedTCP *);
		void SetRakPeerInterface(RakNet::RakPeerInterface *);
		void Update(void);
		void UsesReliabilityLayer(void);
		void ~PluginInterface2();
		void ~PluginInterface2();
		void ProcessNetworkPacket(RakNet::SystemAddress,char const*,int,RakNet::RakPeer *,RakNet::RakNetSmartPtr<RakNet::RakNetSocket>,ulong long,RakNet::BitStream &);
		void ProcessNetworkPacket(RakNet::SystemAddress,char const*,int,RakNet::RakPeer *,ulong long,RakNet::BitStream &);
		void ProcessOfflineNetworkPacket(RakNet::SystemAddress,char const*,int,RakNet::RakPeer *,RakNet::RakNetSmartPtr<RakNet::RakNetSocket>,bool *,ulong long);
		void FromString(char const*);
		RakNetGUID(void);
		void ToString(char *);
		void ToString(void);
		void ToUint32(RakNet::RakNetGUID const&);
		void operator!=(RakNet::RakNetGUID const&);
		void operator<(RakNet::RakNetGUID const&);
		void operator==(RakNet::RakNetGUID const&);
		void operator>(RakNet::RakNetGUID const&);
		void FillBufferMT(void *,uint);
		void FrandomMT(void);
		RakNetRandom(void);
		void RandomMT(void);
		void ReloadMT(void);
		void SeedMT(uint);
		void ~RakNetRandom();
		RakNetSmartPtr(RakNet::RakNetSmartPtr<RakNet::RakNetSocket> const&);
		void SetNull(void);
		void operator=(RakNet::RakNetSmartPtr<RakNet::RakNetSocket> const&);
		void ~RakNetSmartPtr();
		RakNetSocket(void);
		void ~RakNetSocket();
		void AddPacketToProducer(RakNet::Packet *);
		void AddToActiveSystemList(uint);
		void AddToBanList(char const*,uint);
		void AddToSecurityExceptionList(char const*);
		void AdvertiseSystem(char const*,ushort,char const*,int,uint);
		void AllocPacket(uint,char const*,uint);
		void AllocPacket(uint,uchar *,char const*,uint);
		void AllocatePacket(uint);
		void AllowConnectionResponseIPMigration(bool);
		void AllowIncomingConnections(void);
		void ApplyNetworkSimulator(float,ushort,ushort);
		void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress,RakNet::RakPeer::RemoteSystemStruct::ConnectMode,RakNet::RakNetSmartPtr<RakNet::RakNetSocket>,bool *,RakNet::SystemAddress,int,RakNet::RakNetGUID,bool);
		void AttachPlugin(RakNet::PluginInterface2 *);
		void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &,RakNet::Packet *);
		void CancelConnectionAttempt(RakNet::SystemAddress);
		void ChangeSystemAddress(RakNet::RakNetGUID,RakNet::SystemAddress const&);
		void ClearBanList(void);
		void ClearBufferedCommands(void);
		void ClearBufferedPackets(void);
		void ClearRemoteSystemLookup(void);
		void ClearRequestedConnectionList(void);
		void ClearSocketQueryOutput(void);
		void CloseConnection(RakNet::AddressOrGUID,bool,uchar,PacketPriority);
		void CloseConnectionInternal(RakNet::AddressOrGUID const&,bool,bool,uchar,PacketPriority);
		void Connect(char const*,ushort,char const*,int,RakNet::PublicKey *,uint,uint,uint,uint);
		void ConnectWithSocket(char const*,ushort,char const*,int,RakNet::RakNetSmartPtr<RakNet::RakNetSocket>,RakNet::PublicKey *,uint,uint,uint);
		void DeallocatePacket(RakNet::Packet *);
		void DerefAllSockets(void);
		void DereferenceRemoteSystem(RakNet::SystemAddress const&);
		void DetachPlugin(RakNet::PluginInterface2 *);
		void DisableSecurity(void);
		void GenerateGUID(void);
		void GenerateSeedFromGuid(void);
		void GetAveragePing(RakNet::AddressOrGUID);
		void GetBestClockDifferential(RakNet::SystemAddress);
		void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress,char *);
		void GetConnectionList(RakNet::SystemAddress *,ushort *);
		void GetConnectionState(RakNet::AddressOrGUID);
		void GetExternalID(RakNet::SystemAddress);
		void GetGUIDFromIndex(int);
		void GetGuidFromSystemAddress(RakNet::SystemAddress);
		void GetIncomingPassword(char *,int *);
		void GetIndexFromGuid(RakNet::RakNetGUID);
		void GetIndexFromSystemAddress(RakNet::SystemAddress);
		void GetIndexFromSystemAddress(RakNet::SystemAddress,bool);
		void GetInternalID(RakNet::SystemAddress,int);
		void GetLastPing(RakNet::AddressOrGUID);
		void GetLocalIP(uint);
		void GetLoopbackAddress(void);
		void GetLowestPing(RakNet::AddressOrGUID);
		void GetMTUSize(RakNet::SystemAddress);
		void GetMaximumIncomingConnections(void);
		void GetMaximumNumberOfPeers(void);
		void GetMyBoundAddress(int);
		void GetMyGUID(void);
		void GetNextSendReceipt(void);
		void GetNumberOfAddresses(void);
		void GetNumberOfRemoteInitiatedConnections(void);
		void GetOfflinePingResponse(char **,uint *);
		void GetRakNetSocketFromUserConnectionSocketIndex(uint);
		void GetReceiveBufferSize(void);
		void GetRemoteSystem(RakNet::AddressOrGUID,bool,bool);
		void GetRemoteSystem(RakNet::SystemAddress const&);
		void GetRemoteSystemFromGUID(RakNet::RakNetGUID,bool);
		void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress,bool,bool);
		void GetRemoteSystemIndex(RakNet::SystemAddress const&);
		void GetSocket(RakNet::SystemAddress);
		void GetSockets(DataStructures::List<RakNet::RakNetSmartPtr<RakNet::RakNetSocket>> &);
		void GetSplitMessageProgressInterval(void);
		void GetStatistics(RakNet::SystemAddress,RakNet::RakNetStatistics *);
		void GetStatistics(int,RakNet::RakNetStatistics *);
		void GetSystemAddressFromGuid(RakNet::RakNetGUID);
		void GetSystemAddressFromIndex(int);
		void GetSystemIndexFromGuid(RakNet::RakNetGUID);
		void GetSystemList(DataStructures::List<RakNet::SystemAddress> &,DataStructures::List<RakNet::RakNetGUID> &);
		void GetTimeoutTime(RakNet::SystemAddress);
		void IncrementNextSendReceipt(void);
		void InitializeSecurity(char const*,char const*,bool);
		void IsActive(void);
		void IsBanned(char const*);
		void IsInSecurityExceptionList(char const*);
		void IsLocalIP(char const*);
		void IsLoopbackAddress(RakNet::AddressOrGUID const&,bool);
		void IsNetworkSimulatorActive(void);
		void NotifyAndFlagForShutdown(RakNet::SystemAddress,bool,uchar,PacketPriority);
		void NumberOfConnections(void);
		void OnConnectedPong(ulong long,ulong long,RakNet::RakPeer::RemoteSystemStruct *);
		void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *,ulong long);
		void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *,RakNet::SystemAddress const&,char const*,int);
		void Ping(RakNet::SystemAddress);
		void Ping(char const*,ushort,bool,uint);
		void PingInternal(RakNet::SystemAddress,bool,PacketReliability);
		void PushBackPacket(RakNet::Packet *,bool);
		void RakPeer(void);
		void Receive(void);
		void ReferenceRemoteSystem(RakNet::SystemAddress const&,uint);
		void ReleaseSockets(DataStructures::List<RakNet::RakNetSmartPtr<RakNet::RakNetSocket>> &);
		void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&);
		void RemoveFromActiveSystemList(RakNet::SystemAddress const&);
		void RemoveFromBanList(char const*);
		void RemoveFromSecurityExceptionList(char const*);
		void ResetSendReceipt(void);
		void RunUpdateCycle(ulong long,ulong long,RakNet::BitStream &);
		void Send(RakNet::BitStream const*,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,uint);
		void Send(char const*,int,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,uint);
		void SendBuffered(char const*,uint,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,RakNet::RakPeer::RemoteSystemStruct::ConnectMode,uint);
		void SendBufferedList(char const**,int const*,int,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,RakNet::RakPeer::RemoteSystemStruct::ConnectMode,uint);
		void SendConnectionRequest(char const*,ushort,char const*,int,RakNet::PublicKey *,uint,uint,uint,uint,uint);
		void SendConnectionRequest(char const*,ushort,char const*,int,RakNet::PublicKey *,uint,uint,uint,uint,uint,RakNet::RakNetSmartPtr<RakNet::RakNetSocket>);
		void SendImmediate(char *,uint,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,bool,ulong long,uint);
		void SendList(char const**,int const*,int,PacketPriority,PacketReliability,char,RakNet::AddressOrGUID,bool,uint);
		void SendLoopback(char const*,int);
		void SendOutOfBand(char const*,ushort,char const*,uint,uint);
		void SendTTL(char const*,ushort,int,uint);
		void SetIncomingPassword(char const*,int);
		void SetLimitIPConnectionFrequency(bool);
		void SetMaximumIncomingConnections(ushort);
		void SetOccasionalPing(bool);
		void SetOfflinePingResponse(char const*,uint);
		void SetPerConnectionOutgoingBandwidthLimit(uint);
		void SetSplitMessageProgressInterval(int);
		void SetTimeoutTime(uint,RakNet::SystemAddress);
		void SetUnreliableTimeout(uint);
		void SetUserUpdateThread(void (*);
		void ShiftIncomingTimestamp(uchar *,RakNet::SystemAddress const&);
		void Shutdown(uint,uchar,PacketPriority);
		void Startup(ushort,RakNet::SocketDescriptor *,uint,int);
		void ValidateRemoteSystemLookup(void);
		void WriteOutOfBandHeader(RakNet::BitStream *);
		void ~RakPeer();
		void ~RakPeer();
		void DestroyInstance(RakNet::RakPeerInterface*);
		void Get64BitUniqueRandomNumber(void);
		void GetInstance(void);
		void ~RakPeerInterface();
		void ~RakPeerInterface();
		void Allocate(uint);
		void AppendBytes(char const*,uint);
		void Assign(char const*);
		void Assign(char const*,std::__va_list);
		void Assign(char const*,uint,uint);
		void Clear(void);
		void Clone(void);
		void ContainsNonprintableExceptSpaces(void);
		void Deserialize(RakNet::BitStream *);
		void Deserialize(char *,RakNet::BitStream *);
		void DeserializeCompressed(RakNet::BitStream *,bool);
		void DeserializeCompressed(char *,RakNet::BitStream *,bool);
		void Erase(uint,uint);
		void FPrintf(__sFILE *);
		void Find(char const*,uint);
		void Free(void);
		void FreeMemory(void);
		void FreeMemoryNoMutex(void);
		void GetLength(void);
		void GetLengthUTF8(void);
		void IPAddressMatch(char const*);
		void IsEmailAddress(void);
		void IsEmpty(void);
		void LockMutex(void);
		void MakeFilePath(void);
		void NonVariadic(char const*);
		void Printf(void);
		void RakString(RakNet::RakString const&);
		void RakString(RakNet::RakString::SharedString *);
		void RakString(char const*,...);
		void RakString(char);
		void RakString(uchar const*,...);
		void RakString(uchar);
		void RakString(void);
		void RakStringComp(RakNet::RakString const&,RakNet::RakString const&);
		void Realloc(RakNet::RakString::SharedString *,uint);
		void RemoveCharacter(char);
		void Replace(uint,uint,uchar);
		void SQLEscape(void);
		void Serialize(RakNet::BitStream *);
		void Serialize(char const*,RakNet::BitStream *);
		void SerializeCompressed(RakNet::BitStream *,uchar,bool);
		void SerializeCompressed(char const*,RakNet::BitStream *,uchar,bool);
		void Set(char const*,...);
		void SetChar(uint,RakNet::RakString);
		void SetChar(uint,uchar);
		void SplitURI(RakNet::RakString&,RakNet::RakString&,RakNet::RakString&);
		void StrCmp(RakNet::RakString const&);
		void StrICmp(RakNet::RakString const&);
		void SubStr(uint,uint);
		void TerminateAtFirstCharacter(char);
		void TerminateAtLastCharacter(char);
		void ToInteger(RakNet::RakString const&);
		void ToInteger(char const*);
		void ToLower(uchar);
		void ToLower(void);
		void ToString(long long);
		void ToString(ulong long);
		void ToUpper(uchar);
		void ToUpper(void);
		void Truncate(uint);
		void TruncateUTF8(uint);
		void URLDecode(void);
		void URLEncode(void);
		void UnlockMutex(void);
		void operator!=(RakNet::RakString const&);
		void operator!=(char *);
		void operator!=(char const*);
		void operator+=(RakNet::RakString const&);
		void operator+=(char *);
		void operator+=(char const*);
		void operator+=(char);
		void operator+=(uchar *);
		void operator+=(uchar const*);
		void operator<(RakNet::RakString const&);
		void operator<=(RakNet::RakString const&);
		void operator=(RakNet::RakString const&);
		void operator=(char *);
		void operator=(char const*);
		void operator=(char);
		void operator=(uchar *);
		void operator=(uchar const*);
		void operator==(RakNet::RakString const&);
		void operator==(char *);
		void operator==(char const*);
		void operator>(RakNet::RakString const&);
		void operator>=(RakNet::RakString const&);
		void operator[](uint);
		void ~RakString();
		void Create(void * (*);
		void RecvFromLoop(void *);
		void AckTimeout(ulong long);
		void AddFirstToDatagramHistory(RakNet::uint24_t,RakNet::uint24_t,ulong long);
		void AddFirstToDatagramHistory(RakNet::uint24_t,ulong long);
		void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *,RakNet::uint24_t);
		void AddToListTail(RakNet::InternalPacket *,bool);
		void AddToUnreliableLinkedList(RakNet::InternalPacket *);
		void AllocInternalPacketData(RakNet::InternalPacket *,RakNet::InternalPacketRefCountedData **,uchar *,uchar *);
		void AllocInternalPacketData(RakNet::InternalPacket *,uchar *);
		void AllocInternalPacketData(RakNet::InternalPacket *,uint,bool,char const*,uint);
		void AllocateFromInternalPacketPool(void);
		void ApplyNetworkSimulator(double,uint,uint);
		void AreAcksWaiting(void);
		void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *,ulong long);
		void BuildPacketFromSplitPacketList(ushort,ulong long,int,RakNet::SystemAddress &,RakNet::RakNetRandom *,ushort,uint,RakNet::BitStream &);
		void CheckSHA1(char *,uchar *,uint);
		void ClearPacketsAndDatagrams(void);
		void CreateInternalPacketCopy(RakNet::InternalPacket *,int,int,ulong long);
		void CreateInternalPacketFromBitStream(RakNet::BitStream *,ulong long);
		void DeleteSequencedPacketsInList(uchar,DataStructures::List<RakNet::InternalPacket *> &,int);
		void DeleteSequencedPacketsInList(uchar,DataStructures::Queue<RakNet::InternalPacket *> &);
		void FreeInternalPacketData(RakNet::InternalPacket *,char const*,uint);
		void FreeMemory(bool);
		void FreeThreadSafeMemory(void);
		void GetMaxDatagramSizeExcludingMessageHeaderBits(void);
		void GetMaxDatagramSizeExcludingMessageHeaderBytes(void);
		void GetMaxMessageHeaderLengthBits(void);
		void GetMessageHeaderLengthBits(RakNet::InternalPacket const*);
		void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t,ulong long *);
		void GetNextSendTime(void);
		void GetNextWeight(int);
		void GetResendListDataSize(void);
		void GetSHA1(uchar *,uint,char *);
		void GetStatistics(RakNet::RakNetStatistics *);
		void GetTimeBetweenPackets(void);
		void GetTimeoutTime(void);
		void HandleSocketReceiveFromConnectedPlayer(char const*,uint,RakNet::SystemAddress &,DataStructures::List<RakNet::PluginInterface2 *> &,int,int,RakNet::RakNetRandom *,ushort,uint,ulong long,RakNet::BitStream &);
		void InitHeapWeights(void);
		void InitializeVariables(void);
		void InsertIntoSplitPacketList(RakNet::InternalPacket *,ulong long);
		void InsertPacketIntoResendList(RakNet::InternalPacket *,ulong long,bool,bool);
		void IsDeadConnection(void);
		void IsOlderOrderedPacket(RakNet::uint24_t,RakNet::uint24_t);
		void IsOutgoingDataWaiting(void);
		void IsResendQueueEmpty(void);
		void IsSendThrottled(int);
		void KillConnection(void);
		void MoveToListHead(RakNet::InternalPacket *);
		void PopListHead(bool);
		void PushDatagram(void);
		void PushPacket(ulong long,RakNet::InternalPacket *,bool);
		void Receive(uchar **);
		void ReleaseToInternalPacketPool(RakNet::InternalPacket *);
		void ReliabilityLayer(void);
		void RemoveFromDatagramHistory(RakNet::uint24_t);
		void RemoveFromList(RakNet::InternalPacket *,bool);
		void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *);
		void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t,ulong long,DataStructures::List<RakNet::PluginInterface2 *> &,RakNet::SystemAddress const&);
		void ResendBufferOverflow(void);
		void Reset(bool,int,bool);
		void ResetPacketsAndDatagrams(void);
		void Send(char *,uint,PacketPriority,PacketReliability,uchar,bool,int,ulong long,uint);
		void SendACKs(int,RakNet::SystemAddress &,ulong long,RakNet::RakNetRandom *,ushort,uint,RakNet::BitStream &);
		void SendAcknowledgementPacket(RakNet::uint24_t,ulong long);
		void SendBitStream(int,RakNet::SystemAddress &,RakNet::BitStream *,RakNet::RakNetRandom *,ushort,uint,ulong long);
		void SetSplitMessageProgressInterval(int);
		void SetTimeoutTime(uint);
		void SetUnreliableTimeout(uint);
		void SplitPacket(RakNet::InternalPacket *);
		void TagMostRecentPushAsSecondOfPacketPair(void);
		void Update(int,RakNet::SystemAddress &,int,ulong long,uint,DataStructures::List<RakNet::PluginInterface2 *> &,RakNet::RakNetRandom *,ushort,uint,RakNet::BitStream &);
		void UpdateWindowFromAck(ulong long);
		void UpdateWindowFromPacketloss(ulong long);
		void ValidateResendList(void);
		void WriteToBitStreamFromInternalPacket(RakNet::BitStream *,RakNet::InternalPacket const*,ulong long);
		void ~ReliabilityLayer();
		void Recv(char *,int);
		void Send(char const*,uint);
		void SendOrBuffer(char const**,uint const*,int);
		void SetActive(bool);
		void CloseEvent(void);
		void InitEvent(void);
		void SetEvent(void);
		void SignaledEvent(void);
		void WaitOnEvent(int);
		void ~SignaledEvent();
		void Init(void);
		void Lock(void);
		void SimpleMutex(void);
		void Unlock(void);
		void ~SimpleMutex();
		void SocketDescriptor(ushort,char const*);
		void SocketDescriptor(void);
		void CreateBoundSocket(ushort,bool,char const*,uint,uint,ushort);
		void CreateBoundSocket_Old(ushort,bool,char const*,uint,uint);
		void CreateBoundSocket_PS3Lobby(ushort,bool,char const*,ushort);
		void CreateBoundSocket_PSP2(ushort,bool,char const*,ushort);
		void DomainNameToIP(char const*);
		void DomainNameToIP_Old(char const*);
		void GetFirstBindableIP(char *,int);
		void GetLocalPort(int);
		void GetMyIP(RakNet::SystemAddress *);
		void GetSubNetForSocketAndIp(int,RakNet::RakString);
		void GetSystemAddress(int,RakNet::SystemAddress *);
		void GetSystemAddress_Old(int,RakNet::SystemAddress *);
		void IsPortInUse(ushort,char const*,ushort);
		void IsPortInUse_Old(ushort,char const*);
		void IsSocketFamilySupported(char const*,ushort);
		void RecvFromBlocking(int,RakNet::RakPeer *,ushort,uint,char *,int *,RakNet::SystemAddress *,ulong long *);
		void RecvFromBlocking_Old(int,RakNet::RakPeer *,ushort,uint,char *,int *,RakNet::SystemAddress *,ulong long *);
		void SendTo(int,char const*,int,RakNet::SystemAddress &,ushort,uint,char const*,long);
		void SendToTTL(int,char const*,int,RakNet::SystemAddress &,int);
		void SendTo_360(int,char const*,int,char const*,int,RakNet::SystemAddress const&,uint);
		void SendTo_PC(int,char const*,int,RakNet::SystemAddress const&,char const*,long);
		void SendTo_PS3Lobby(int,char const*,int,RakNet::SystemAddress const&,ushort);
		void SendTo_PSP2(int,char const*,int,RakNet::SystemAddress const&,ushort);
		void SetDoNotFragment(int,int,int);
		void SetNonBlocking(int);
		void SetSocketLayerOverride(RakNet::SocketLayerOverride *);
		void SetSocketOptions(int);
		void Write(int,char const*,int);
		void SplitPacketChannelComp(ushort const&,RakNet::SplitPacketChannel * const&);
		void StrAndBoolComp(char * const&,StrAndBool const&);
		void AddReference(void);
		void DecodeString(RakNet::RakString *,int,RakNet::BitStream *,uchar);
		void DecodeString(char *,int,RakNet::BitStream *,uchar);
		void EncodeString(RakNet::RakString const*,int,RakNet::BitStream *,uchar);
		void EncodeString(char const*,int,RakNet::BitStream *,uchar);
		void GenerateTreeFromStrings(uchar *,uint,uchar);
		void Instance(void);
		void RemoveReference(void);
		void StringCompressor(void);
		void ~StringCompressor();
		void AddReference(void);
		void AddString(char const*,bool);
		void DecodeString(char *,int,RakNet::BitStream *);
		void EncodeString(char const*,int,RakNet::BitStream *);
		void Instance(void);
		void LogStringNotFound(char const*);
		void RemoveReference(void);
		void StringTable(void);
		void ~StringTable();
		void CopyPort(RakNet::SystemAddress const&);
		void EqualsExcludingPort(RakNet::SystemAddress const&);
		void FixForIPVersion(RakNet::SystemAddress const&);
		void FromString(char const*,char,int);
		void FromStringExplicitPort(char const*,ushort,int);
		void GetIPPROTO(void);
		void GetIPVersion(void);
		void GetPort(void);
		void GetPortNetworkOrder(void);
		void IsLoopback(void);
		void SetBinaryAddress(char const*,char);
		void SetPort(ushort);
		void SetPortNetworkOrder(ushort);
		void SetToLoopback(uchar);
		void SetToLoopback(void);
		void SystemAddress(char const*);
		void SystemAddress(char const*,ushort);
		void SystemAddress(void);
		void ToInteger(RakNet::SystemAddress const&);
		void ToString(bool,char *,char);
		void ToString(bool,char);
		void ToString_Old(bool,char *,char);
		void operator!=(RakNet::SystemAddress const&);
		void operator<(RakNet::SystemAddress const&);
		void operator=(RakNet::SystemAddress const&);
		void operator==(RakNet::SystemAddress const&);
		void operator>(RakNet::SystemAddress const&);
		void size(void);
		void AllocatePacket(uint);
		void Base64Encoding(char const*,int,char *);
		void CloseConnection(RakNet::SystemAddress);
		void Connect(char const*,ushort,bool,ushort);
		void DeallocatePacket(RakNet::Packet *);
		void DestroyInstance(RakNet::TCPInterface*);
		void GetConnectionCount(void);
		void GetConnectionList(RakNet::SystemAddress *,ushort *);
		void GetInstance(void);
		void GetOutgoingDataBufferSize(RakNet::SystemAddress);
		void HasCompletedConnectionAttempt(void);
		void HasFailedConnectionAttempt(void);
		void HasLostConnection(void);
		void HasNewIncomingConnection(void);
		void PushBackPacket(RakNet::Packet *,bool);
		void Receive(void);
		void ReceiveHasPackets(void);
		void Send(char const*,uint,RakNet::SystemAddress const&,bool);
		void SendList(char const**,uint const*,int,RakNet::SystemAddress const&,bool);
		void SocketConnect(char const*,ushort,ushort);
		void Start(ushort,ushort,ushort,int,ushort);
		void Stop(void);
		void TCPInterface(void);
		void WasStarted(void);
		void ~TCPInterface();
		void ~TCPInterface();
		void UpdateNetworkLoop(void *);
		void UpdateTCPInterfaceLoop(void *);
		void _DLMallocDirectMMap(uint);
		void _DLMallocMMap(uint);
		void _DLMallocMUnmap(void *,uint);
		void _RakFree(void *);
		void _RakFree_Ex(void *,char const*,uint);
		void _RakMalloc(uint);
		void _RakMalloc_Ex(uint,char const*,uint);
		void _RakRealloc(void *,uint);
		void _RakRealloc_Ex(void *,uint,char const*,uint);
	}
};
