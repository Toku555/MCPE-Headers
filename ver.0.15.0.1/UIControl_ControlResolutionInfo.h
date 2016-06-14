#pragma once
namespace UIControl{
	class ControlResolutionInfo{
		public:
		void function<void ();
		void ControlResolutionInfo(void);
		UIControl(void);
		void _getComponentIndex(ushort);
		void _getComponentIndex(ushort);
		void _hasComponent(ushort);
		void _hasComponent(ushort);
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void _resolveControlNames(std::shared_ptr<UIControl> const&);
		void _resolvePostCreate(void);
		void _resolvePostCreate(void);
		void addChild(std::shared_ptr<UIControl> &);
		void addChild(std::shared_ptr<UIControl> &);
		void function<void ();
		void function<void ();
		void areAllAncestorsVisible(void);
		void areAllAncestorsVisible(void);
		void broadcastEvent(UIComponent *,ScreenEvent);
		void broadcastEvent(UIComponent *,ScreenEvent);
		void broadcastEvent(VisualTree &,ScreenInputContext &,AnimationController &,UIComponent *,ScreenEvent);
		void broadcastEvent(VisualTree &,ScreenInputContext &,AnimationController &,UIComponent *,ScreenEvent);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void containsPoint(glm::detail::tvec2<float> const&);
		void containsPoint(glm::detail::tvec2<float> const&);
		void createPropertyBag(Json::Value const&);
		void createPropertyBag(Json::Value const&);
		void findCollectionIndex(std::string const&);
		void findCollectionIndex(std::string const&);
		void getAABB(void);
		void getAABB(void);
		void getAllowClipping(void);
		void getAllowClipping(void);
		void function<bool ();
		void function<bool ();
		void getChildren(void);
		void getChildren(void);
		void getClipOffset(void);
		void getClipOffset(void);
		void getClipsChildren(void);
		void getClipsChildren(void);
		void getEnableScissorTestForClipping(void);
		void getEnableScissorTestForClipping(void);
		void getEnabled(void);
		void getEnabled(void);
		void getHover(void);
		void getHover(void);
		void getLayer(void);
		void getLayer(void);
		void getName(void);
		void getName(void);
		void getParent(void);
		void getParent(void);
		void getPathedName(void);
		void getPathedName(void);
		void getPosition(void);
		void getPosition(void);
		void getPropertyBag(void);
		void getPropertyBag(void);
		void getRenderOnlyWhenTopmost(void);
		void getRenderOnlyWhenTopmost(void);
		void getSelected(void);
		void getSelected(void);
		void getSize(void);
		void getSize(void);
		void getVisible(void);
		void getVisible(void);
		void getZOrder(void);
		void getZOrder(void);
		void notifyChildAdded(void);
		void notifyChildAdded(void);
		void notifyChildRemoved(void);
		void notifyChildRemoved(void);
		void removeChildrenWithComponent<GridItemComponent>(void);
		void removeChildrenWithComponent<GridItemComponent>(void);
		void removeParentByName(std::string const&);
		void removeParentByName(std::string const&);
		void setAllowClipping(bool);
		void setAllowClipping(bool);
		void setClipOffset(Vec2 const&);
		void setClipOffset(Vec2 const&);
		void setClipsChildren(bool);
		void setClipsChildren(bool);
		void setComponent<AnimationComponent>(std::unique_ptr<AnimationComponent,std::default_delete<AnimationComponent>>);
		void setComponent<AnimationComponent>(std::unique_ptr<AnimationComponent,std::default_delete<AnimationComponent>>);
		void setComponent<ButtonComponent>(std::unique_ptr<ButtonComponent,std::default_delete<ButtonComponent>>);
		void setComponent<ButtonComponent>(std::unique_ptr<ButtonComponent,std::default_delete<ButtonComponent>>);
		void setComponent<CustomRenderComponent>(std::unique_ptr<CustomRenderComponent,std::default_delete<CustomRenderComponent>>);
		void setComponent<CustomRenderComponent>(std::unique_ptr<CustomRenderComponent,std::default_delete<CustomRenderComponent>>);
		void setComponent<DataBindingComponent>(std::unique_ptr<DataBindingComponent,std::default_delete<DataBindingComponent>>);
		void setComponent<DataBindingComponent>(std::unique_ptr<DataBindingComponent,std::default_delete<DataBindingComponent>>);
		void setComponent<DebugComponent>(std::unique_ptr<DebugComponent,std::default_delete<DebugComponent>>);
		void setComponent<DebugComponent>(std::unique_ptr<DebugComponent,std::default_delete<DebugComponent>>);
		void setComponent<FactoryComponent>(std::unique_ptr<FactoryComponent,std::default_delete<FactoryComponent>>);
		void setComponent<FactoryComponent>(std::unique_ptr<FactoryComponent,std::default_delete<FactoryComponent>>);
		void setComponent<FocusComponent>(std::unique_ptr<FocusComponent,std::default_delete<FocusComponent>>);
		void setComponent<FocusComponent>(std::unique_ptr<FocusComponent,std::default_delete<FocusComponent>>);
		void setComponent<GestureComponent>(std::unique_ptr<GestureComponent,std::default_delete<GestureComponent>>);
		void setComponent<GestureComponent>(std::unique_ptr<GestureComponent,std::default_delete<GestureComponent>>);
		void setComponent<GridComponent>(std::unique_ptr<GridComponent,std::default_delete<GridComponent>>);
		void setComponent<GridComponent>(std::unique_ptr<GridComponent,std::default_delete<GridComponent>>);
		void setComponent<GridItemComponent>(std::unique_ptr<GridItemComponent,std::default_delete<GridItemComponent>>);
		void setComponent<GridItemComponent>(std::unique_ptr<GridItemComponent,std::default_delete<GridItemComponent>>);
		void setComponent<InputComponent>(std::unique_ptr<InputComponent,std::default_delete<InputComponent>>);
		void setComponent<InputComponent>(std::unique_ptr<InputComponent,std::default_delete<InputComponent>>);
		void setComponent<LayoutComponent>(std::unique_ptr<LayoutComponent,std::default_delete<LayoutComponent>>);
		void setComponent<LayoutComponent>(std::unique_ptr<LayoutComponent,std::default_delete<LayoutComponent>>);
		void setComponent<ScreenComponent>(std::unique_ptr<ScreenComponent,std::default_delete<ScreenComponent>>);
		void setComponent<ScreenComponent>(std::unique_ptr<ScreenComponent,std::default_delete<ScreenComponent>>);
		void setComponent<ScrollTrackComponent>(std::unique_ptr<ScrollTrackComponent,std::default_delete<ScrollTrackComponent>>);
		void setComponent<ScrollTrackComponent>(std::unique_ptr<ScrollTrackComponent,std::default_delete<ScrollTrackComponent>>);
		void setComponent<ScrollViewComponent>(std::unique_ptr<ScrollViewComponent,std::default_delete<ScrollViewComponent>>);
		void setComponent<ScrollViewComponent>(std::unique_ptr<ScrollViewComponent,std::default_delete<ScrollViewComponent>>);
		void setComponent<ScrollbarBoxComponent>(std::unique_ptr<ScrollbarBoxComponent,std::default_delete<ScrollbarBoxComponent>>);
		void setComponent<ScrollbarBoxComponent>(std::unique_ptr<ScrollbarBoxComponent,std::default_delete<ScrollbarBoxComponent>>);
		void setComponent<SliderBoxComponent>(std::unique_ptr<SliderBoxComponent,std::default_delete<SliderBoxComponent>>);
		void setComponent<SliderBoxComponent>(std::unique_ptr<SliderBoxComponent,std::default_delete<SliderBoxComponent>>);
		void setComponent<SliderComponent>(std::unique_ptr<SliderComponent,std::default_delete<SliderComponent>>);
		void setComponent<SliderComponent>(std::unique_ptr<SliderComponent,std::default_delete<SliderComponent>>);
		void setComponent<SliderManagerComponent>(std::unique_ptr<SliderManagerComponent,std::default_delete<SliderManagerComponent>>);
		void setComponent<SliderManagerComponent>(std::unique_ptr<SliderManagerComponent,std::default_delete<SliderManagerComponent>>);
		void setComponent<SoundComponent>(std::unique_ptr<SoundComponent,std::default_delete<SoundComponent>>);
		void setComponent<SoundComponent>(std::unique_ptr<SoundComponent,std::default_delete<SoundComponent>>);
		void setComponent<SpriteComponent>(std::unique_ptr<SpriteComponent,std::default_delete<SpriteComponent>>);
		void setComponent<SpriteComponent>(std::unique_ptr<SpriteComponent,std::default_delete<SpriteComponent>>);
		void setComponent<StackPanelComponent>(std::unique_ptr<StackPanelComponent,std::default_delete<StackPanelComponent>>);
		void setComponent<StackPanelComponent>(std::unique_ptr<StackPanelComponent,std::default_delete<StackPanelComponent>>);
		void setComponent<TabComponent>(std::unique_ptr<TabComponent,std::default_delete<TabComponent>>);
		void setComponent<TabComponent>(std::unique_ptr<TabComponent,std::default_delete<TabComponent>>);
		void setComponent<TextComponent>(std::unique_ptr<TextComponent,std::default_delete<TextComponent>>);
		void setComponent<TextComponent>(std::unique_ptr<TextComponent,std::default_delete<TextComponent>>);
		void setComponent<TextEditComponent>(std::unique_ptr<TextEditComponent,std::default_delete<TextEditComponent>>);
		void setComponent<TextEditComponent>(std::unique_ptr<TextEditComponent,std::default_delete<TextEditComponent>>);
		void setComponent<ToggleComponent>(std::unique_ptr<ToggleComponent,std::default_delete<ToggleComponent>>);
		void setComponent<ToggleComponent>(std::unique_ptr<ToggleComponent,std::default_delete<ToggleComponent>>);
		void setComponent<ToggleManagerComponent>(std::unique_ptr<ToggleManagerComponent,std::default_delete<ToggleManagerComponent>>);
		void setComponent<ToggleManagerComponent>(std::unique_ptr<ToggleManagerComponent,std::default_delete<ToggleManagerComponent>>);
		void setEnableClippingScissorTest(bool);
		void setEnableClippingScissorTest(bool);
		void setEnabled(bool);
		void setEnabled(bool);
		void setHover(bool);
		void setHover(bool);
		void setLayer(int);
		void setLayer(int);
		void setName(std::string const&);
		void setName(std::string const&);
		void setPosition(glm::detail::tvec2<float> const&);
		void setPosition(glm::detail::tvec2<float> const&);
		void setPropertyBag(UIPropertyBag const&);
		void setPropertyBag(UIPropertyBag const&);
		void setRenderOnlyWhenTopmost(bool);
		void setRenderOnlyWhenTopmost(bool);
		void setSelected(bool);
		void setSelected(bool);
		void setSize(glm::detail::tvec2<float> const&);
		void setSize(glm::detail::tvec2<float> const&);
		void setVisible(bool);
		void setVisible(bool);
		void setZOrder(int);
		void setZOrder(int);
		void ~UIControl();
		void ~UIControl();
		void ~UIControl();
		void ~UIControl();
	}
};
