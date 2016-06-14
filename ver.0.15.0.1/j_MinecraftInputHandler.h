#pragma once
namespace j{
	class MinecraftInputHandler{
		public:
		void _registerVoiceMappings(void);
		void allowPicking(void);
		void clearInputDeviceQueues(void);
		void getCurrentInputMode(void);
		void getMoveTurnInput(void);
		void getNameRegistry(void);
		void onMobEffectsChanged(MobEffectsLayout const&);
		void render(void);
		void setSuspendInput(bool);
		void updateHoloUIInputMode(HoloUIInputMode);
		void updateInputMode(GamePlayInputMode);
	}
};
