#include <iostream>
#include <memory>

#include <rtc/rtc.hpp>
int main(const int argc, const char* argv[]) {
	// initialize rtc logger
	rtc::InitLogger(rtc::LogLevel::Verbose);

	// initialize peer connection
	auto peer_connection = std::make_unique<rtc::PeerConnection>();

	peer_connection->onStateChange([](rtc::PeerConnection::State state) { 
		std::cout << "State: " << state << std::endl;
	});

	return 0;
}