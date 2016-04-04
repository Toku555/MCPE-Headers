#pragma once
class ClientNetworkHandler{
	public:
		ClientNetworkHandler(PacketSender &,MinecraftClient &);
		ClientNetworkHandler(PacketSender &,MinecraftClient &,Level &);
		void allowIncomingPacketId(RakNet::RakNetGUID const&,int);
		void handle(RakNet::RakNetGUID const&,ChunkRadiusUpdatedPacket *);
		void handle(RakNet::RakNetGUID const&,ClientboundMapItemDataPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingDataPacket *);
		void handle(RakNet::RakNetGUID const&,EntityEventPacket *);
		void handle(RakNet::RakNetGUID const&,LevelEventPacket *);
		void handle(RakNet::RakNetGUID const&,PlayStatusPacket *);
		void handle(RakNet::RakNetGUID const&,ReplaceSelectedItemPacket *);
		void handle(RakNet::RakNetGUID const&,RespawnPacket *);
		void handle(RakNet::RakNetGUID const&,SetPlayerGameTypePacket *);
		void handle(RakNet::RakNetGUID const&,TakeItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,TelemetryEventPacket *);
		void handle(RakNet::RakNetGUID const&,TextPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateAttributesPacket *);
		void handle(RakNet::RakNetGUID const&,UseItemPacket *);
		void onDisconnect(RakNet::RakNetGUID const&,std::string const&);
		void ~ClientNetworkHandler();
		void ~ClientNetworkHandler();
};
