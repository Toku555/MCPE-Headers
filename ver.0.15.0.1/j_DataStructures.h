#pragma once
namespace j{
	class DataStructures{
		public:
		void Push(ulong long const&,RakNet::InternalPacket * const&,char const*,uint);
		void Release(RakNet::InternalPacket*,char const*,uint);
		void Release(RakNet::RemoteSystemIndex*,char const*,uint);
		void Clear(char const*,uint);
		void Clear(char const*,uint);
	}
};
