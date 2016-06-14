#pragma once
class Resource{
	public:
		void load(ResourceLocation const&,std::string &);
		void load(ResourceLocation const&,std::string &);
		void loadTexture(ResourceLocation const&);
		void loadTexture(ResourceLocation const&);
		void registerLoader(std::string,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>);
		void registerLoader(std::string,std::unique_ptr<ResourceLoader,std::default_delete<ResourceLoader>>);
};
