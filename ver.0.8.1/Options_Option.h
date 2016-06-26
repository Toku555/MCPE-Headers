#pragma once
namespace Options{
	class Option{
		public:
		void ~Option();
		void addOptionToSaveOutput(std::vector<std::string,std::allocator<std::string>> &,std::string,bool);
		void addOptionToSaveOutput(std::vector<std::string,std::allocator<std::string>> &,std::string,float);
		void addOptionToSaveOutput(std::vector<std::string,std::allocator<std::string>> &,std::string,int);
		void addOptionToSaveOutput(std::vector<std::string,std::allocator<std::string>> &,std::string,std::string);
		void canModify(Options::Option const*);
		void formatDescriptionString(char const*,char const**,int);
		void getBooleanValue(Options::Option const*);
		void getDescription(Options::Option const*,std::string);
		void getIntValue(Options::Option const*);
		void getKeyDescription(int);
		void getKeyMessage(int);
		void getMessage(Options::Option const*);
		void getProgressValue(Options::Option const*);
		void getProgrssMax(Options::Option const*);
		void getProgrssMin(Options::Option const*);
		void getStringValue(Options::Option const*);
		void getValues(Options::Option const*);
		void hideOption(Options::Option const*);
		void init(Minecraft *,std::string);
		void initDefaultValues(void);
		void load(void);
		void notifyOptionUpdate(Options::Option const*,bool);
		void notifyOptionUpdate(Options::Option const*,float);
		void notifyOptionUpdate(Options::Option const*,int);
		void readBool(std::string const&,bool &);
		void readFloat(std::string const&,float &);
		void readInt(std::string const&,int &);
		void save(void);
		void set(Options::Option const*,float);
		void set(Options::Option const*,int);
		void set(Options::Option const*,std::string);
		void setAdditionalHiddenOptions(std::vector<Options::Option const*,std::allocator<Options::Option const*>> const&);
		void setKey(int,int);
		void toggle(Options::Option const*,int);
		void update(void);
		void validateVersion(void);
		void ~Options();
	}
};
