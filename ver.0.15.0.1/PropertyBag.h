#pragma once
class PropertyBag{
	public:
		PropertyBag(Json::Value const&);
		PropertyBag(Json::Value const&);
		PropertyBag(void);
		PropertyBag(void);
		void clone(void);
		void get<Color>(std::string const&,Color);
		void get<Color>(std::string const&,Color);
		void tvec2<int>>(std::string const&,glm::detail::tvec2<int>);
		void tvec2<int>>(std::string const&,glm::detail::tvec2<int>);
		void has(std::string const&);
		void has(std::string const&);
		void memberCount(void);
		void set(std::string const&,std::vector<bool,std::allocator<bool>>);
		void set(std::string const&,std::vector<bool,std::allocator<bool>>);
		void set(std::string const&,std::vector<int,std::allocator<int>>);
		void set(std::string const&,std::vector<int,std::allocator<int>>);
		void set(std::string const&,std::vector<std::string,std::allocator<std::string>>);
		void set(std::string const&,std::vector<std::string,std::allocator<std::string>>);
		void toJsonValue(void);
		void toString(void);
		void toString(void);
};
