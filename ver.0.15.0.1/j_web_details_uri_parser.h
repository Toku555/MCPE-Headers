#pragma once
namespace j{
	class web{
		public:
		void validate(std::string const&);
		void finish_request(void);
		void open_and_send_request(std::shared_ptr<web::http::client::details::request_context> const&);
		void push_request(std::shared_ptr<web::http::client::details::request_context> const&);
		void ~_http_client_communicator();
		void ~asio_connection();
		void handle_write_body(boost::system::error_code const&);
		void handle_write_chunked_body(boost::system::error_code const&);
		void handle_write_large_body(boost::system::error_code const&);
		void ~ssl_proxy_tunnel();
		void handle_timeout(boost::system::error_code const&,std::weak_ptr<web::http::client::details::asio_context> const&);
		void write_request(void);
		void ~request_context();
		void string>(std::string const&,std::string const&);
		void erase(uint);
		void format_impl<char>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> &);
		void format_impl<char>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> &);
		void erase(std::string const&);
		void operator[](std::string const&);
		void operator=(web::json::value const&);
		void operator=(web::json::value&&);
		void connect(void);
		void send_msg(web::websockets::client::websocket_outgoing_message &);
		void asio_client>(std::weak_ptr<void> const&,bool);
		void asio_tls_client>(std::weak_ptr<void> const&,bool);
	}
};
