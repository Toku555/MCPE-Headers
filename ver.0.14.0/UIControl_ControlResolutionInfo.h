#pragma once
namespace UIControl{
	class ControlResolutionInfo{
		public:
		void function<void ();
		void ControlResolutionInfo(void);
		UIControl(void);
		void _areAncestorsVisible(void);
		void function<void ();
		void _resolveControlNames(std::shared_ptr<UIControl> const&);
		void addChild(std::shared_ptr<UIControl> &);
		void broadcastEvent(VisualTree &,AnimationController &,UIComponent *,ScreenEvent);
		void clone(std::shared_ptr<UIControl> &);
		void containsPoint(glm::detail::tvec2<float> const&);
		void createPropertyBag(Json::Value const&);
		void getAllowClipping(void);
		void getChildren(void);
		void getClipOffset(void);
		void getClipsChildren(void);
		void getComponent<AnimationComponent>(void);
		void getComponent<LayoutComponent>(void);
		void getEnabled(void);
		void getFocus(void);
		void getHover(void);
		void getLayer(void);
		void getName(void);
		void getParent(void);
		void getPosition(void);
		void getPropertyBag(void);
		void getRenderOnlyWhenTopmost(void);
		void getSelected(void);
		void getSize(void);
		void getVisible(void);
		void getZOrder(void);
		void removeChildrenWithComponent<GridItemComponent>(void);
		void setAllowClipping(bool);
		void setClipOffset(Vec2 const&);
		void setClipsChildren(bool);
		void setComponent<AnimationComponent>(std::unique_ptr<AnimationComponent,std::default_delete<AnimationComponent>>);
		void setComponent<DataBindingComponent>(std::unique_ptr<DataBindingComponent,std::default_delete<DataBindingComponent>>);
		void setComponent<SpriteComponent>(std::unique_ptr<SpriteComponent,std::default_delete<SpriteComponent>>);
		void setEnabled(bool);
		void setFocus(bool);
		void setHover(bool);
		void setLayer(int);
		void setName(std::string const&);
		void setPosition(glm::detail::tvec2<float> const&);
		void setRenderOnlyWhenTopmost(bool);
		void setSelected(bool);
		void setSize(glm::detail::tvec2<float> const&);
		void setVisible(bool);
		void setZOrder(int);
		void updateChildrenSize(void);
		void ~UIControl();
		void ~UIControl();
	}
};
