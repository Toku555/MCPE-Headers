#pragma once
class GamepadLayoutScreenController{
	public:
		GamepadLayoutScreenController(std::shared_ptr<GamepadLayoutScreenModel>);
		void _getActionGridSize(void);
		void _getButtonADescription(void);
		void _handleBindingStateOpenEvents(ScreenEvent &);
		void _handleConfirmationNo(PropertyBag *);
		void _handleConfirmationYes(PropertyBag *);
		void _handleEscapeOrBack(PropertyBag *);
		void _openBindingState(PropertyBag *);
		void _saveAndExit(PropertyBag *);
		void _showResetConfirmation(PropertyBag *);
		void tick(void);
		void ~GamepadLayoutScreenController();
		void ~GamepadLayoutScreenController();
};
