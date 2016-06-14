#pragma once
namespace j{
	class MinecraftScreenController{
		public:
		void handleGameEventNotification(ui::GameEventNotification);
		void tick(void);
		void ~MinecraftScreenController();
	}
};
