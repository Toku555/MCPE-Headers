#pragma once
namespace j{
	class MinecraftTelemetry{
		public:
		void _loadVisitedBiomes(void);
		void _saveVisitedBiomes(void);
		void fireEventAwardAchievement(Player *,MinecraftTelemetry::AchievementIds);
		void fireEventAwardAchievement(Player *,MinecraftTelemetry::AchievementIds);
		void fireEventCraftingSessionEnd(Player *);
		void fireEventItemAcquired(Player *,ItemInstance const&,uint,MinecraftTelemetry::AcquisitionMethod);
		void fireEventItemCrafted(Player *,ItemInstance const&);
		void fireEventItemSmelted(Player *,ItemInstance const&,ItemInstance const&);
		void fireEventItemUsed(Player *,ItemInstance const&,MinecraftTelemetry::UseMethod);
		void fireEventPotionBrewed(Player *,ItemInstance const&,uint);
		void fireEventSetValidForAcheivements(Player *,bool);
		void fireEventSignOutOfXboxLive(void);
		void fireEventStartWorld(std::string const&,std::string const&);
	}
};
