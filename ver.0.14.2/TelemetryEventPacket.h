#pragma once
class TelemetryEventPacket{
	public:
		TelemetryEventPacket(Player const*,DimensionId);
		TelemetryEventPacket(Player const*,DimensionId,DimensionId);
		TelemetryEventPacket(Player const*,Entity const*,MinecraftTelemetry::InteractionType);
		TelemetryEventPacket(Player const*,Entity const*,Mob const*,EntityDamageCause);
		TelemetryEventPacket(Player const*,MinecraftTelemetry::AchievementIds,bool);
		TelemetryEventPacket(Player const*,TelemetryEventPacket::Data const&);
		TelemetryEventPacket(Player const*,short,uint,short);
		TelemetryEventPacket(void);
		void getId(void);
		void getPlayerUniqueId(void);
		void getTelemetryData(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void usePlayerID(void);
		void ~TelemetryEventPacket();
		void ~TelemetryEventPacket();
};
