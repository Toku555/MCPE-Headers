#pragma once
namespace PropertyBag{
	class PropertyChangedNotificationInfo{
		public:
		void PropertyChangedNotificationInfo(PropertyBag::PropertyChangedNotificationInfo const&);
		void _handlePropertyChangedNotifications(std::string const&,Json::Value,PropertyBag::ContextObject);
		void clearPropertyChangedNotificationRegistrations(void);
		void TextureSource>(std::string const&,ui::TextureSource);
		void set(std::string const&,Color);
		void set(std::string const&,glm::detail::tvec2<int>);
		void set(std::string const&,std::vector<bool,std::allocator<bool>>);
		void set<bool>(std::string const&,bool);
		void set<float>(std::string const&,float);
		void set<int>(std::string const&,int);
		void string>(std::string const&,std::string);
	}
};
