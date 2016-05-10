#pragma once
namespace Json{
	class FastWriter{
		public:
		void FastWriter(void);
		void enableYAMLCompatibility(void);
		void write(Json::Value const&);
		void writeValue(Json::Value const&);
		void ~FastWriter();
		void ~FastWriter();
		void Features(void);
		void all(void);
		void strictMode(void);
		void Path(std::string const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&);
		void addPathInArg(std::string const&,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>> const&,__gnu_cxx::__normal_iterator<Json::PathArgument const* const*,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>>> &,Json::PathArgument::Kind);
		void invalidPath(std::string const&,int);
		void make(Json::Value &);
		void makePath(std::string const&,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>> const&);
		void resolve(Json::Value const&);
		void resolve(Json::Value const&,Json::Value const&);
		void PathArgument(char const*);
		void PathArgument(std::string const&);
		void PathArgument(uint);
		void PathArgument(void);
		void Reader(Json::Features const&);
		void Reader(void);
		void addComment(char const*,char const*,Json::CommentPlacement);
		void addError(std::string const&,Json::Reader::Token &,char const*);
		void addErrorAndRecover(std::string const&,Json::Reader::Token &,Json::Reader::TokenType);
		void currentValue(void);
		void decodeDouble(Json::Reader::Token &);
		void decodeNumber(Json::Reader::Token &);
		void decodeString(Json::Reader::Token &);
		void decodeString(Json::Reader::Token &,std::string &);
		void decodeUnicodeCodePoint(Json::Reader::Token &,char const*&,char const*,uint &);
		void decodeUnicodeEscapeSequence(Json::Reader::Token &,char const*&,char const*,uint &);
		void expectToken(Json::Reader::TokenType,Json::Reader::Token &,char const*);
		void getFormatedErrorMessages(void);
		void getFormattedErrorMessages(void);
		void getLocationLineAndColumn(char const*,int &,int &);
		void getNextChar(void);
		void match(char const*,int);
		void parse(char const*,char const*,Json::Value &,bool);
		void parse(std::istream &,Json::Value &,bool);
		void parse(std::string const&,Json::Value &,bool);
		void readArray(Json::Reader::Token &);
		void readCStyleComment(void);
		void readComment(void);
		void readCppStyleComment(void);
		void readNumber(void);
		void readObject(Json::Reader::Token &);
		void readString(void);
		void readToken(Json::Reader::Token &);
		void readValue(void);
		void recoverFromError(Json::Reader::TokenType);
		void skipCommentTokens(Json::Reader::Token &);
		void skipSpaces(void);
		void ~Reader();
		void StyledStreamWriter(std::string);
		void hasCommentForValue(Json::Value const&);
		void indent(void);
		void isMultineArray(Json::Value const&);
		void normalizeEOL(std::string const&);
		void pushValue(std::string const&);
		void unindent(void);
		void write(std::ostream &,Json::Value const&);
		void writeArrayValue(Json::Value const&);
		void writeCommentAfterValueOnSameLine(Json::Value const&);
		void writeCommentBeforeValue(Json::Value const&);
		void writeIndent(void);
		void writeValue(Json::Value const&);
		void writeWithIndent(std::string const&);
		void StyledWriter(void);
		void hasCommentForValue(Json::Value const&);
		void indent(void);
		void isMultineArray(Json::Value const&);
		void normalizeEOL(std::string const&);
		void pushValue(std::string const&);
		void unindent(void);
		void write(Json::Value const&);
		void writeArrayValue(Json::Value const&);
		void writeCommentAfterValueOnSameLine(Json::Value const&);
		void writeCommentBeforeValue(Json::Value const&);
		void writeIndent(void);
		void writeValue(Json::Value const&);
		void writeWithIndent(std::string const&);
		void ~StyledWriter();
		void ~StyledWriter();
		void CZString(Json::Value::CZString const&);
		void CZString(char const*,Json::Value::CZString::DuplicationPolicy);
		void CZString(uint);
		void c_str(void);
		void index(void);
		void isStaticString(void);
		void operator<(Json::Value::CZString const&);
		void operator=(Json::Value::CZString const&);
		void operator==(Json::Value::CZString const&);
		void swap(Json::Value::CZString&);
		void ~CZString();
		void CommentInfo(void);
		void setComment(char const*);
		void ~CommentInfo();
		void Value(Json::StaticString const&);
		void Value(Json::Value const&);
		void Value(Json::ValueType);
		void Value(bool);
		void Value(char const*);
		void Value(char const*,char const*);
		void Value(double);
		void Value(int);
		void Value(long long);
		void Value(std::string const&);
		void Value(uint);
		void Value(ulong long);
		void append(Json::Value const&);
		void asBool(bool);
		void asCString(void);
		void asDouble(double);
		void asFloat(float);
		void asInt(int);
		void asInt64(long long);
		void asLargestInt(void);
		void asLargestUInt(void);
		void asString(std::string const&);
		void asUInt(uint);
		void asUInt64(ulong long);
		void begin(void);
		void begin(void);
		void clear(void);
		void compare(Json::Value const&);
		void empty(void);
		void end(void);
		void end(void);
		void get(char const*,Json::Value const&);
		void get(std::string const&,Json::Value const&);
		void get(uint,Json::Value const&);
		void getComment(Json::CommentPlacement);
		void getMemberNames(void);
		void hasComment(Json::CommentPlacement);
		void isArray(void);
		void isBool(void);
		void isConvertibleTo(Json::ValueType);
		void isDouble(void);
		void isInt(void);
		void isIntegral(void);
		void isMember(char const*);
		void isMember(std::string const&);
		void isNull(void);
		void isNumeric(void);
		void isObject(void);
		void isString(void);
		void isUInt(void);
		void isValidIndex(uint);
		void operator!(void);
		void operator!=(Json::Value const&);
		void operator<(Json::Value const&);
		void operator<=(Json::Value const&);
		void operator=(Json::Value const&);
		void operator==(Json::Value const&);
		void operator>(Json::Value const&);
		void operator>=(Json::Value const&);
		void operator[](Json::StaticString const&);
		void operator[](char const*);
		void operator[](char const*);
		void operator[](int);
		void operator[](int);
		void operator[](std::string const&);
		void operator[](std::string const&);
		void operator[](uint);
		void operator[](uint);
		void removeMember(char const*);
		void removeMember(std::string const&);
		void resize(uint);
		void resolveReference(char const*,bool);
		void setComment(char const*,Json::CommentPlacement);
		void setComment(std::string const&,Json::CommentPlacement);
		void size(void);
		void swap(Json::Value&);
		void toStyledString(void);
		void type(void);
		void ~Value();
		void ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&);
		void ValueConstIterator(void);
		void operator=(Json::ValueIteratorBase const&);
		void ValueIterator(Json::ValueConstIterator const&);
		void ValueIterator(Json::ValueIterator const&);
		void ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&);
		void ValueIterator(void);
		void operator=(Json::ValueIterator const&);
		void ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&);
		void ValueIteratorBase(void);
		void computeDistance(Json::ValueIteratorBase const&);
		void copy(Json::ValueIteratorBase const&);
		void decrement(void);
		void deref(void);
		void increment(void);
		void index(void);
		void isEqual(Json::ValueIteratorBase const&);
		void key(void);
		void memberName(void);
		void ~Writer();
		void ~Writer();
		void operator<<(std::ostream &,Json::Value const&);
		void operator>>(std::istream &,Json::Value &);
		void valueToString(bool);
		void valueToString(int);
		void valueToString(uint);
	}
};
