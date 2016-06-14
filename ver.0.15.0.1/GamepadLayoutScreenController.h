#pragma once
class GamepadLayoutScreenController{
	public:
		GamepadLayoutScreenController(std::shared_ptr<GamepadLayoutScreenModel>);
		GamepadLayoutScreenController(std::shared_ptr<GamepadLayoutScreenModel>);
		void _getActionGridSize(void);
		void _getButtonADescription(void);
		void _getButtonADescription(void);
		void _handleBindingStateOpenEvents(ScreenEvent &);
		void _handleConfirmationNo(UIPropertyBag *);
		void _handleConfirmationYes(UIPropertyBag *);
		void _handleEscapeOrBack(UIPropertyBag *);
		void _openBindingState(UIPropertyBag *);
		void _openBindingState(UIPropertyBag *);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _saveAndExit(UIPropertyBag *);
		void _showResetConfirmation(UIPropertyBag *);
		void tick(void);
		void tick(void);
		void ~GamepadLayoutScreenController();
		void ~GamepadLayoutScreenController();
		void ~GamepadLayoutScreenController();
		void ~GamepadLayoutScreenController();
};
