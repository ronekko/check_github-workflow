#include <arpa/inet.h>

#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    const std::string ip = "192.168.0.10";
    const uint16_t port = 30222;

    int sock;
    sock = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = ::htons(port);
    addr.sin_addr.s_addr = ::inet_addr(ip.c_str());

    const int result = ::connect(sock, (struct sockaddr*)&(addr), sizeof(addr));
    if (result < 0) {
        const std::string error_message =
                "TCP接続が確立できませんでした。ncコマンドを実行して、IPアドレスとポート番号を確認してください。";
        std::cerr << error_message << std::endl;
        throw std::runtime_error(error_message);
    }
}
