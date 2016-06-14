#pragma once
namespace j{
	class Json{
		public:
		void readToken(Json::Reader::Token &);
		void writeArrayValue(Json::Value const&);
		void writeArrayValue(Json::Value const&);
		void Value(Json::Value const&);
		void Value(Json::ValueType);
		void asFloat(float);
		void asInt(int);
		void operator!=(Json::Value const&);
		void operator<(Json::Value const&);
		void operator[](uint);
		void resolveReference(char const*,bool);
		void size(void);
	}
};
