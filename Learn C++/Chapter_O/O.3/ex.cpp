#include <cstdint>

constexpr std::uint8_t mask0 { 0x01 }; // hex for 0000 0001
constexpr std::uint8_t mask1 { 0x02 }; // hex for 0000 0010
constexpr std::uint8_t mask2 { 0x04 }; // hex for 0000 0100
constexpr std::uint8_t mask3 { 0x08 }; // hex for 0000 1000
constexpr std::uint8_t mask4 { 0x10 }; // hex for 0001 0000
constexpr std::uint8_t mask5 { 0x20 }; // hex for 0010 0000
constexpr std::uint8_t mask6 { 0x40 }; // hex for 0100 0000
constexpr std::uint8_t mask7 { 0x80 }; // hex for 1000 0000

// Below is an easier method

constexpr std::uint8_t mask8 { 1 << 0 }; // 0000 0001
constexpr std::uint8_t mask9 { 1 << 1 }; // 0000 0010
constexpr std::uint8_t mask10{ 1 << 2 }; // 0000 0100
constexpr std::uint8_t mask11{ 1 << 3 }; // 0000 1000
constexpr std::uint8_t mask12{ 1 << 4 }; // 0001 0000
constexpr std::uint8_t mask11{ 1 << 5 }; // 0010 0000
constexpr std::uint8_t mask12{ 1 << 6 }; // 0100 0000
constexpr std::uint8_t mask13{ 1 << 7 }; // 1000 0000