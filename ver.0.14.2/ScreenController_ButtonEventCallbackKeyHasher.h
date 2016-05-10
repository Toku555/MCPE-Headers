#pragma once
namespace ScreenController{
	class ButtonEventCallbackKeyHasher{
		public:
		void operator();
		void _getNameRegistry(void);
		void _handleButtonEvent(ScreenEvent &);
		void _handleFocusMoveEvent(FocusMoveScreenEventData &);
		void _handleInputModeChangedEvent(InputModeChangeScreenEventData &);
		void _handlePointerHeldEvent(PointerHeldScreenEventData &);
		void _handleTextEditEvent(TextEditScreenEventData &);
		void _handleToggleChangeEvent(ToggleChangeEventData &);
		void bind(std::string const&,uint,int,std::string const&,uint,std::string const&,PropertyBag &);
		void bind(std::string const&,uint,std::string const&,PropertyBag &);
		void getCallbackInterval(void);
		void handleEvent(ScreenEvent);
		void handleGameEventNotification(ui::GameEventNotification);
		void handleLicenseChanged(void);
		void onOpen(void);
		void onRender(void);
		void onTerminate(void);
		void ViewRequest ();
		void ViewRequest ();
		void ViewRequest ();
		void ViewRequest ();
		void setAssociatedBlockPos(BlockPos const&);
		void setAssociatedEntityUniqueID(EntityUniqueID);
		void setSuspendInput(bool);
		void setViewCommand(ScreenViewCommand);
		void tick(void);
		void ~ScreenController();
		void ~ScreenController();
	}
};
