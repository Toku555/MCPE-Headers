#pragma once
class TelemetryEventPacket{
	public:
		TelemetryEventPacket(Player const*,DimensionId);
		TelemetryEventPacket(Player const*,DimensionId);
		TelemetryEventPacket(Player const*,DimensionId,DimensionId);
		TelemetryEventPacket(Player const*,DimensionId,DimensionId);
		TelemetryEventPacket(Player const*,Entity const*,MinecraftTelemetry::InteractionType);
		TelemetryEventPacket(Player const*,Entity const*,MinecraftTelemetry::InteractionType);
		TelemetryEventPacket(Player const*,Entity const*,Mob const*,EntityDamageCause);
		TelemetryEventPacket(Player const*,Entity const*,Mob const*,EntityDamageCause);
		TelemetryEventPacket(Player const*,MinecraftTelemetry::AchievementIds,bool);
		TelemetryEventPacket(Player const*,MinecraftTelemetry::AchievementIds,bool);
		TelemetryEventPacket(Player const*,TelemetryEventPacket::Data const&);
		TelemetryEventPacket(Player const*,TelemetryEventPacket::Data const&);
		TelemetryEventPacket(Player const*,short,uint,short);
		TelemetryEventPacket(Player const*,short,uint,short);
		TelemetryEventPacket(void);
		TelemetryEventPacket(void);
		void getId(void);
		void getId(void);
		void getPlayerUniqueId(void);
		void getPlayerUniqueId(void);
		void getTelemetryData(void);
		void getTelemetryData(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void usePlayerID(void);
		void usePlayerID(void);
		void write(RakNet::BitStream *);
		void ~TelemetryEventPacket();
		void ~TelemetryEventPacket();
};
