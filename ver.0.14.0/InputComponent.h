#pragma once
class InputComponent{
	public:
		void _computePressType(short,ButtonState);
		void _getContentPanelHover(glm::detail::tvec2<float> const&);
		void _sendScreenEvent(ScreenInputContext &,std::shared_ptr<UIControl> &,InputComponent::ScreenButtonMapping const&,ButtonState,glm::detail::tvec2<float> const&,VisualTree &,AnimationController &);
		void _shouldHandleMapping(std::shared_ptr<UIControl> &,InputComponent::ScreenButtonMapping const&,InputComponent::PressType,short,ButtonState,glm::detail::tvec2<float> const&,InputMode);
		void _shouldHandlePressedMapping(std::shared_ptr<UIControl> &,InputComponent::ScreenButtonMapping const&,short,ButtonState,glm::detail::tvec2<float> const&,InputMode);
		void addButtonMapping(short,short,ButtonMappingType,ScreenEventScope,bool,bool,bool,bool);
		void addHoverButtonMapping(short,ScreenEventScope);
		void addRemappingMapping(ScreenEventScope);
		void addTargetControl(std::weak_ptr<UIControl>);
		void clone(std::shared_ptr<UIControl> &);
		void getAlwaysHandlePointer(void);
		void getAlwaysListensToInput(void);
		void getContentPanel(void);
		void getDefaultFocusPrecedence(void);
		void getFocusEnabled(void);
		void getTargetControls(void);
		void handleButtonEvent(VisualTree &,AnimationController &,ScreenInputContext &,short,ButtonState,glm::detail::tvec2<float> const&,InputMode);
		void handleFocusLocation(VisualTree &,AnimationController &,ScreenInputContext &,glm::detail::tvec2<float> const&,bool);
		void handleInputModeChange(VisualTree &,AnimationController &,ScreenInputContext &,InputMode);
		void handlePointerLocation(VisualTree &,AnimationController &,ScreenInputContext &,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,bool);
		void isWithinClipRegion(glm::detail::tvec2<float> const&);
		void setAlwaysHandlePointer(bool);
		void setAlwaysListensToInput(bool);
		void setContentPanel(std::weak_ptr<UIControl>);
		void setDefaultFocusPrecedence(int);
		void setFocusEnabled(bool);
		void ~InputComponent();
		void ~InputComponent();
};
