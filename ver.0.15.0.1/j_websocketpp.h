#pragma once
namespace j{
	class websocketpp{
		public:
		void read_handshake(uint);
		void send_http_request(void);
		void send_http_response(std::error_code const&);
		void start(void);
		void terminate(std::error_code const&);
		void ~connection();
		void read_handshake(uint);
		void send_http_request(void);
		void send_http_response(std::error_code const&);
		void start(void);
		void terminate(std::error_code const&);
		void ~connection();
		void append_header(std::string const&,std::string const&);
		void write(uint,char const*);
		void write(uint,char const*);
	}
};
