#include <iostream>
#include <bitset>
#include <cstdint>

int main()
{
  constexpr std::uint32_t redbits{0xFF000000};
  constexpr std::uint32_t greenbits{0x00FF0000};
  constexpr std::uint32_t bluebits{0x0000FF00};
  constexpr std::uint32_t Alpha{0x000000FF};

  std::cout << "Enter a RGBA in hex =";
  uint32_t pixel{};
  std::cin >> std::hex >> pixel;

  std::uint32_t red{static_cast<std::uint32_t>(pixel & redbits) >> 24};
  std::uint32_t green{static_cast<std::uint32_t>(pixel & greenbits) >> 16};
  std::uint32_t blue{static_cast<std::uint32_t>(pixel & bluebits) >> 8};
  std::uint32_t alpha{static_cast<std::uint32_t>(pixel & Alpha)};

  std::cout << "Your color is =" << '\n';
  std::cout << std::hex;
  std::cout << static_cast<int>(red) << '\n';
  std::cout << static_cast<int>(green) << '\n';
  std::cout << static_cast<int>(blue) << '\n';
  std::cout << static_cast<int>(alpha) << '\n';

  return 0;
}