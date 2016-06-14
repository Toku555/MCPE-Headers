#pragma once
class FocusComponent{
	public:
		FocusComponent(std::shared_ptr<UIControl> &);
		FocusComponent(std::shared_ptr<UIControl> &);
		void _applyCapturedFocusPoint(VisualTree &);
		void _captureFocusPoint(void);
		void _captureFocusPoint(void);
		void checkFocusChangeOverride(ui::CardinalDirection,std::string const&);
		void checkFocusChangeOverride(ui::CardinalDirection,std::string const&);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getDefaultFocusPrecedence(void);
		void getDefaultFocusPrecedence(void);
		void getFocusEnabled(void);
		void getFocusEnabled(void);
		void getFocusIdentifier(void);
		void getFocusIdentifier(void);
		void hasFocusChangeOverride(ui::CardinalDirection);
		void hasFocusChangeOverride(ui::CardinalDirection);
		void initialize(FocusManager &);
		void initialize(FocusManager &);
		void receive(ScreenEvent);
		void receive(ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setDefaultFocusPrecedence(int);
		void setDefaultFocusPrecedence(int);
		void setFocusChangeOverride(ui::CardinalDirection,std::string const&);
		void setFocusChangeOverride(ui::CardinalDirection,std::string const&);
		void setFocusEnabled(bool);
		void setFocusEnabled(bool);
		void setFocusIdentifier(std::string const&);
		void setFocusIdentifier(std::string const&);
		void ~FocusComponent();
		void ~FocusComponent();
		void ~FocusComponent();
		void ~FocusComponent();
};
