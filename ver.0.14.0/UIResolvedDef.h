#pragma once
class UIResolvedDef{
	public:
		UIResolvedDef(std::vector<Json::Value *,std::allocator<Json::Value *>> *,ButtonRegistry const*,std::string const&,std::string const&,Json::Value const&,Json::Value const&);
		UIResolvedDef(std::vector<Json::Value *,std::allocator<Json::Value *>> *,Json::Value const&);
		void _popVariables(void);
		void _pushVariables(void);
		void _replaceVarsInRefString(std::string const&,std::vector<Json::Value *,std::allocator<Json::Value *>> *);
		void _resolveVariable(Json::Value const&);
		void create(UIDefRepository const&,std::vector<Json::Value *,std::allocator<Json::Value *>> *,ButtonRegistry const*,std::string const&,Json::Value const&);
		void create(UIDefRepository const&,std::vector<Json::Value *,std::allocator<Json::Value *>> *,ButtonRegistry const*,std::string const&,std::string const&);
		void getAsAnchorPoint(std::string const&,UI::AnchorPoint);
		void getAsAnimationType(std::string const&,UI::AnimationType);
		void getAsBindingCondition(std::string const&,BindingCondition);
		void getAsBindingType(std::string const&,BindingType);
		void getAsBool(std::string const&,bool);
		void getAsButtonId(std::string const&,short);
		void getAsClipDirection(std::string const&,UI::ClipDirection);
		void getAsClipOffset(std::string const&);
		void getAsColor(std::string const&,Color const&);
		void getAsDraggable(std::string const&,UI::Draggable);
		void getAsFloat(std::string const&,float);
		void getAsFontSize(std::string const&,UI::FontSize);
		void getAsFontType(std::string const&,UI::FontType);
		void getAsGridRescalingType(std::string const&,UI::GridRescalingType);
		void getAsGridSize(std::string const&,glm::detail::tvec2<int> const&);
		void getAsInt(std::string const&,int);
		void getAsLayoutSize(std::string const&,UI::LayoutOffset const&);
		void getAsSize(std::string const&,glm::detail::tvec2<float> const&);
		void getAsSliceSize(std::string const&,UI::SliceSize const&);
		void getAsString(std::string const&,std::string const&);
		void getAsUV(std::string const&,glm::detail::tvec2<float> const&);
		void getAsUVSize(std::string const&,glm::detail::tvec2<float> const&);
		void getDefType(void);
		void getName(void);
		void getNamespace(void);
		void getValue(std::string const&);
		void hasValue(std::string const&);
		void isIgnored(void);
		void isNamed(void);
		void isValid(void);
		void parseName(std::string const&,std::string &,std::string &,std::string &,std::vector<Json::Value *,std::allocator<Json::Value *>> *);
		void ~UIResolvedDef();
};
