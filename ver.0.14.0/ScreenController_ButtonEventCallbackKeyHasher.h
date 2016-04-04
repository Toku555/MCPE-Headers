#pragma once
namespace ScreenController{
	class ButtonEventCallbackKeyHasher{
		public:
		void operator();
		void operator();
		void function<bool ();
		void function<int ();
		void string ();
		void _handleButtonEvent(ScreenEvent &);
		void _handleFocusMoveEvent(FocusMoveScreenEventData &);
		void _handleInputModeChangedEvent(InputModeChangeScreenEventData &);
		void _handlePointerHeldEvent(PointerHeldScreenEventData &);
		void _handleTextEditEvent(TextEditScreenEventData &);
		void ViewRequest ();
		void ViewRequest ();
		void ViewRequest ();
		void ViewRequest ();
		void bind(std::string const&,int,std::string const&,std::string const&,PropertyBag &);
		void bind(std::string const&,std::string const&,PropertyBag &);
		void getCallbackInterval(void);
		void getKeyboardHeight(void);
		void handleEvent(ScreenEvent);
		void handleGameEventNotification(UI::GameEventNotification);
		void handleLicenseChanged(void);
		void hideKeyboard(void);
		void onOpen(void);
		void setAssociatedBlockPos(BlockPos const&);
		void setAssociatedEntityUniqueID(EntityUniqueID);
		void setSuspendInput(bool);
		void setViewCommand(ScreenViewCommand);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void tick(void);
		void ~ScreenController();
		void ~ScreenController();
	}
};
