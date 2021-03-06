#pragma once
class ToggleComponent{
	public:
		ToggleComponent(std::shared_ptr<UIControl> &);
		ToggleComponent(std::shared_ptr<UIControl> &);
		ToggleComponent(std::shared_ptr<UIControl> &);
		void _handleButtonEvent(VisualTree &,ScreenInputContext &,ButtonScreenEventData const&);
		void _handleButtonEvent(VisualTree &,ScreenInputContext &,ButtonScreenEventData const&);
		void _handleHoverEvent(VisualTree &,HoverScreenEventData const&);
		void _setChecked(ScreenInputContext &,bool);
		void _setVisible(std::weak_ptr<UIControl> &,bool);
		void _updateControlVisibility(void);
		void _updateControlVisibility(void);
		void _updateToggleGroupState(VisualTree &,std::weak_ptr<UIControl>,bool);
		void _updateToggleGroupState(VisualTree &,std::weak_ptr<UIControl>,bool);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getCheckedHoverStateControl(void);
		void getCheckedLockedStateControl(void);
		void getCheckedStateControl(void);
		void getGridCollectionName(void);
		void getGroupIndex(void);
		void getGroupIndex(void);
		void getToggleGroup(void);
		void getToggleGroup(void);
		void getUncheckedHoverStateControl(void);
		void getUncheckedLockedStateControl(void);
		void getUncheckedStateControl(void);
		void isChecked(void);
		void isChecked(void);
		void isLocked(void);
		void isLocked(void);
		void isRadioToggleGroup(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void resetDefaultState(void);
		void resetDefaultState(void);
		void setChecked(bool);
		void setChecked(bool);
		void setCheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setCheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setCheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setCheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setCheckedStateControl(std::shared_ptr<UIControl> &);
		void setCheckedStateControl(std::shared_ptr<UIControl> &);
		void setDefaultGroupSelectedIndex(int);
		void setDefaultGroupSelectedIndex(int);
		void setDefaultState(bool);
		void setDefaultState(bool);
		void setForcedGroupIndex(int);
		void setForcedGroupIndex(int);
		void setGridCollectionName(std::string const&);
		void setGridCollectionName(std::string const&);
		void setRadioToggleGroup(bool);
		void setRadioToggleGroup(bool);
		void setToggleNameId(short);
		void setToggleNameId(short);
		void setUncheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedStateControl(std::shared_ptr<UIControl> &);
		void ~ToggleComponent();
		void ~ToggleComponent();
		void ~ToggleComponent();
		void ~ToggleComponent();
};
