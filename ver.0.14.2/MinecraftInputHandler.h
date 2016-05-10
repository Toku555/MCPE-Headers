#pragma once
class MinecraftInputHandler{
	public:
		MinecraftInputHandler(MinecraftClient &);
		void _interactWithEntity(void);
		void _interactWithItem(void);
		void _loadVoiceMappings(std::vector<VoiceCommandData,std::allocator<VoiceCommandData>> &);
		void _registerButtonMappings(void);
		void _registerMenuButton(std::string const&,bool);
		void _registerRemappingNames(void);
		void _registerVoiceMappings(void);
		void allowInteract(void);
		void allowPicking(void);
		void canInteract(void);
		void clearInputDeviceQueues(void);
		void getBoatExitText(void);
		void getCurrentInputMapping(void);
		void getCurrentInputMode(void);
		void getCursorPos(float &,float &);
		void getHoloUIInputMode(void);
		void getInteractText(void);
		void getLastGameMode(void);
		void getLastHoloUIMode(void);
		void getMoveTurnInput(void);
		void getNameId(std::string const&);
		void getNameRegistry(void);
		void hasMobEffects(void);
		void isCreativeMode(void);
		void isMoving(void);
		void isMovingForward(void);
		void isSneaking(void);
		void onConfigChanged(Config const&);
		void onMobEffectsChanged(MobEffectsLayout const&);
		void popInputMapping(void);
		void pushGamepadMappingMode(void);
		void pushInputMapping(bool);
		void render(void);
		void resetPlayerMovement(void);
		void resetPlayerState(void);
		void setSuspendInput(bool);
		void showBoatExit(void);
		void showJumpButton(void);
		void tick(void);
		void updateHoloUIInputMode(HoloUIInputMode);
		void updateInputMode(GamePlayInputMode);
		void updateInteractActiveState(bool);
		void updatePlayerState(Player const&);
		void useFreeformPickDirection(void);
		void ~MinecraftInputHandler();
		void ~MinecraftInputHandler();
};
